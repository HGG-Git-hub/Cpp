#include"global.h"

//����������������
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}

	//find ����Ԫ��
	//�����Ƿ���5���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) 
	{
		cout << "��" << endl;
	}
	else 
	{
		cout << "��" << endl;
	}	
}
//�Զ�����������
class Person 
{
public:
	string m_name;
	int m_age;
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//�Զ��������������Ҫ����==�ţ��õײ����֪����ζԱ�
	bool operator==(const Person & P) 
	{
		if (this->m_name == P.m_name && this->m_age == P.m_age) 
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

};
void test02() 
{
	vector<Person>v1;
	Person p1("����", 18);
	Person p2("����", 19);
	Person p3("����", 20);
	Person p4("����", 21);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	Person p5("����",21);

	//��һ����û��p5����ˣ���������

	vector<Person>::iterator it = find(v1.begin(), v1.end(), p5);
	if (it == v1.end())
	{
		cout << "��";
	}
	else 
	{
		cout << "��" << " " << endl;;
		cout << it->m_name << " " << it->m_age << endl;
	}
}
int main() 
{
	//test01();

	test02();

	system("pause");
	return 0;
};