#include"global.h"
struct student//注意：被嵌套的结构体需要先定义
{
    string name;
    int age;
    int score;
};
struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;

};
int main() 
{
    struct teacher t;
    t.id = 1;
    t.name = "A";
    t.age = 20;
    t.stu.name = "a";
    t.stu.age = 18;
    t.stu.score = 99;

    cout << "老师的信息" << t.id << t.name << t.age << endl;
    cout << "学生的信息" << t.stu.name << t.stu.age << t.stu.score << endl;

    system("pause");
    return 0;
};
