#include"global.h"
//Ӣ�۽ṹ�嶨��
struct Hero
{
	string name;
	int age;
	string sex;
};
void bbsort(struct Hero message[5],int len) //����������
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			if (message[j].age > message[j + 1].age) 
			{
				struct Hero temp = message[j];
				message[j] = message[j + 1];
				message[j + 1] = temp;
			}
		}
	}
}
void print_Hero(struct Hero message[5],int len)//����������� 
{
	for (int i = 0; i < len; i++) 
	{
		cout<<"�����" << message[i].name << message[i].age << message[i].sex << endl;
	}
}
int main() 
{
	//���һ��Ӣ�۵Ľṹ��
	struct Hero message[5]
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};

	int len = sizeof(message) / sizeof(message[0]);//�������Ԫ�ظ���
	for (int i = 0; i < len; i++)
	{
		cout <<"����ǰ��" << message[i].name << message[i].age << message[i].sex << endl;
	}
	cout << "  " << endl;

	bbsort(message,len);//����������

	print_Hero(message,len);//�����������

	system("pause");
	return 0;
};