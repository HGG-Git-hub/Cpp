#include"global.h"
class greateFive 
{
public:
	bool operator()(int val) 
	{
		return  val > 5;
	}
};
//����������������
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), greateFive());
	if (it == v.end()) 
	{
		cout << "��" << endl;
	}
	else 
	{
		cout << "��" << endl;
		for (; it != v.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
//�����Զ�����������
class Person 
{
public:
	string m_name;
	int m_age;
public:
	Person(string name,int age) 
	{
		this->m_name = name;
		this->m_age = age;
	}
};
class FFF 
{
public:
	bool operator()(const Person &p) 
	{
		return p.m_age >= 20;
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

	vector<Person>::iterator it = find_if(v1.begin(), v1.end(), FFF());
	if (it == v1.end()) 
	{
		cout << "δ�ҵ�~" << endl;
	}
	else 
	{
		cout << "�ҵ���~" << endl;
		for (; it != v1.end(); it++) 
		{
			cout << (*it).m_name << " " << (*it).m_age << endl;
		}
	}
}
int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};