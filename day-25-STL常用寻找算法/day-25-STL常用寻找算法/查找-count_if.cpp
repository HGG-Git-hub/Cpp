#include"global.h"
//ͳ��������������
//��ͨ����
int plus_Five(int &q) 
{
	return q >= 5;
}
//�º���
class plus_five 
{
public:
	bool operator()(int & p) 
	{
		return p >= 3;
	}
};
void test01() 
{
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(5);
	v.push_back(3);
	v.push_back(3);
	
	//��ͨ����
	int num = count_if(v.begin(),v.end(), plus_Five);
	cout << "���ڵ���5������" << num << "��" << endl;
	//�º���
	int nun = count_if(v.begin(), v.end(), plus_five());
	cout << "���ڵ���3������" << nun << "��" << endl;
}
//ͳ���Զ�����������
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
};
class PPP 
{
public:
	bool operator()(const Person& p)
	{
		return p.m_age > 20;
	}
};
void test02() 
{
	vector<Person>v1;

	Person p1("����", 18);
	Person p2("����", 19);
	Person p3("����", 21);
	Person p4("����", 21);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	int num = count_if(v1.begin(),v1.end(), PPP());
	cout << "������ڵ���20������" << num << "��" << endl;
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};