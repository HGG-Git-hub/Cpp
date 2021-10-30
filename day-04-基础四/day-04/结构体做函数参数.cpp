#include"global.h"

struct student
{
    string name;
    int age;
    int score;
};
//输出学生信息
//1.值传递
void printStudent1(struct student q)
{
    q.age = 100;
    cout <<"p1函数输出：" << q.name << q.age << q.score << endl;
}
//2.地址传递
void printStudent2(struct student* p)
{
    p->age = 200;
    cout << "p2函数输出：" << p->name << p->age << p->score << endl;
}
int main()
{
    struct student s;
    s.name = "李四";
    s.age = 22;
    s.score = 88;

    cout << "main函数输出：" << s.age << endl;

    printStudent1(s);//值传递的函数调用

    cout << "main函数输出：" << s.age << endl;

    printStudent2(&s);//地址传递的函数调用

    cout<<"main函数输出："<<s.age<< endl;

    system("pause");
    return 0;
};
	
