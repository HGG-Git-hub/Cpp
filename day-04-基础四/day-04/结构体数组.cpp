#include"global.h"
//����һ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
int main() 
{
	//�����ṹ�����鲢��ֵ
	student stuArray[3] = 
	{
		{"����",18,80},
		{"����",19,90},
		{"����",20,70}
	};
	//����Ҳ�����޸Ķ���õ�ֵ
	stuArray[0].name = "a";
	stuArray[0].age = 1;
	stuArray[0].score = 2;

	//cout << stuArray[0].score << stuArray[0].age << stuArray[0].name << endl;

	for (int i = 0; i < 3; i++) 
	{
		cout<<stuArray[i].name<<stuArray[i].age<<stuArray[i].score<<endl;
	}
	
	
	system("pause");
	return 0;

};
