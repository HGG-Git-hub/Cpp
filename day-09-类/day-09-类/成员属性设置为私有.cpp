#include"global.h"
class Person 
{
private://˽��Ȩ��

	//����	�ɶ���д
	string m_name;
	//����	�ɶ���д
	int age;
	//����	ֻд
	string m_lover;
public://ͨ����Ա������
	//����������д������
	void setName(string name) 
	{
		m_name = name;
	}
	//��ȡ��������������
	string getName() 
	{
		return m_name;
	}
	//�������䣨д���䣩
	void setAge(int a) 
	{
		if (a < 0 || a>100) 
		{
			cout << "���������������" << endl;
			return;
		}
		age = a;
	}
	//��ȡ���䣨�����䣩
	int getAge() 
	{
		return age;
	}
	//���ð��ˣ�д���ˣ�
	void setDear(string name) 
	{
		m_lover = name;
	}
};
int main() 
{
	Person p1;
	p1.setName("����");

	p1.setAge(11);

	p1.setDear("HGG");

	cout << p1.getName() << endl;

	cout << p1.getAge() << endl;

	system("pause");
	return 0;
};