#include"global.h"

struct student
{
    string name;
    int age;
    int score;
};
//���ѧ����Ϣ
//1.ֵ����
void printStudent1(struct student q)
{
    q.age = 100;
    cout <<"p1���������" << q.name << q.age << q.score << endl;
}
//2.��ַ����
void printStudent2(struct student* p)
{
    p->age = 200;
    cout << "p2���������" << p->name << p->age << p->score << endl;
}
int main()
{
    struct student s;
    s.name = "����";
    s.age = 22;
    s.score = 88;

    cout << "main���������" << s.age << endl;

    printStudent1(s);//ֵ���ݵĺ�������

    cout << "main���������" << s.age << endl;

    printStudent2(&s);//��ַ���ݵĺ�������

    cout<<"main���������"<<s.age<< endl;

    system("pause");
    return 0;
};
	
