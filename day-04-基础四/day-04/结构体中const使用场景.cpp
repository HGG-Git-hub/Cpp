#include"global.h"
//定义一个结构体
struct student
{
    string name;
    int age;
    int score;
};

void printStudents(struct student s)
{
    cout << s.name << s.age << s.score << endl;
}

void printStudents1(const  struct student *w)
{
    cout << w->name << w->age << w->score << endl;
}

int main() 
{
    //创建结构体变量并赋值
    struct student s = { "张三",18,88 };
    //通过函数来输出结构体里的信息
    printStudents(s);

    printStudents1(&s);

	system("pause");
	return 0;
};