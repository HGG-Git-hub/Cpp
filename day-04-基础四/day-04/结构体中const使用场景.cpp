#include"global.h"
//����һ���ṹ��
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
    //�����ṹ���������ֵ
    struct student s = { "����",18,88 };
    //ͨ������������ṹ�������Ϣ
    printStudents(s);

    printStudents1(&s);

	system("pause");
	return 0;
};