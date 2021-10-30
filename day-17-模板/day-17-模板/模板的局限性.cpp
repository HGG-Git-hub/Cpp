#include"global.h"
class Person
{
public:
	string m_name;
	int m_age;
public:
	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
};
template<typename T>
bool myCare(T &a, T &b) 
{
	if (a == b) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
//为这些特定的类型提供具体化的模板
template<>bool myCare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void test01() 
{
	int a = 10, b = 20;
	bool res = myCare(a,b);
	if (res==true) 
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
void test02() 
{
	Person p1("tom",18);
	Person p2("joa",19);

	bool res = myCare(p1, p2);
	if (res) 
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	test01();

	system("pause");
	return 0;
};