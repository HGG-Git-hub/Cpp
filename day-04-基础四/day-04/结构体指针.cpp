#include"global.h"
struct student
{
	string name;
	int age;
	int score;
};

int main() 
{
	struct student stuArray[3]
	{
		{"����",18,80},
		{"����",19,90},
		{"����",20,70}
	};


	struct student * p = stuArray;
	for (int i = 0; i < 3; i++)
	{
		cout << p->name << p->age << p->score << endl;
		p++;
	}
	////����ѧ���ṹ�����
	//struct student s { "����", 11, 77 };
	////ͨ��ָ��ָ��ṹ�����
	//struct student* p = &s;
	////ͨ��ָ����ʽṹ������е�����
	//cout << p->name << p->age << p->score << endl;

	


	system("pause");
	return 0;
};