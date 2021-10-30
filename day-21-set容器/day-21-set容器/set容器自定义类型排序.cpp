#include"global.h"
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
//仿函数指定排序规则
//本质是类
class compare
{
public:
	bool operator()(const Person &p1,const Person &p2)const
	{
		//按照年龄升序
		return p1.m_age < p2.m_age;
		//按照年龄降序
		//return p1.m_age > p2.m_age;
	}
};
void printSet(set<Person, compare> &s)
{
	for (set<Person, compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age <<endl;
	}
}
void test01() 
{
	set<Person, compare>s;

	Person p1("a", 22);
	Person p2("b", 24);
	Person p3("c", 21);
	Person p4("d", 23);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	printSet(s);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};