#include<iostream>
#include<string>
#include<algorithm>//�����㷨
#include<vector>//����
using namespace std;

class Person
{
public:
	int m_age;
	string m_name;
public:
	Person(string name, int age) 
	{
		this->m_name = name;
		this->m_age = age;
	}
};
void myPrint(Person* val)
{
	cout << (*val).m_name << " " << (*val).m_age << endl;
}
void test01()
{
	vector<Person>v;
	Person p1("����", 19);
	Person p2("����", 18);
	Person p3("����", 17);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//��������һ�ַ�ʽ
	for (vector<Person>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++) 
	{
		//���ߵȼۣ�itbegin�ı�����ָ��
		//cout << (*itbegin).m_name<<" "<<(*itbegin).m_age << endl;
		cout << itbegin->m_name << itbegin->m_age << endl;
	}
}
//�Զ����������͵�ָ��
void test02() 
{
	vector<Person*>v;
	Person p1("����", 19);
	Person p2("����", 18);
	Person p3("����", 17);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//���ߵȼ�
		cout << (*it)->m_name << (*it)->m_age << endl;
		cout << (**it).m_name << (**it).m_age << endl;
	}
}
int main() 
{
	//test01();

	test02();

	system("pause");
	return 0;
};
