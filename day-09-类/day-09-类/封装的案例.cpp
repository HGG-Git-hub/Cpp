#include"global.h"
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class student 
{
public://����Ȩ��
	//����
	string s_name;
	int s_num;

	//ͨ����Ϊ�����Ը�ֵ
	void set_name(string name)
	{
		s_name = name;
	}
	void set_num(int num)
	{
		s_num = num;
	}

	//��Ϊ
	void showStudent() 
	{
		cout<<s_name<<" "<<s_num<< endl;
	};
};	
int main() 
{	
	//ʵ����(ͨ���࣬�������Ķ���)
	student s1;

	//��ֵ
	s1.set_name("����");
	s1.set_num(1);

	//���ú���
	s1.showStudent();

	system("pause");
	return 0;
};