#include"global.h"
struct student
{
	string name;
	int age;
	int score;
};
struct student1
{
	//��Ա�б�
	string name;//����
	int age;//����
	int score;//����
}s3;

int main() 
{
	struct student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << s1.name << s1.age << s1.score << endl;

	struct student s2 = { "����",19,90 };
	cout << s2.name << s2.age << s2.score << endl;

	//3.����ṹ��ʱ˳�㴴������
	//�鿴����ṹ��
	s3.name = "����";
	s3.age = 20;
	s3.score = 80;
	cout << s3.name << s3.age << s3.score << endl;
	
	system("pause");
	return 0;
}