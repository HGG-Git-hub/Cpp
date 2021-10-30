#include"global.h"
class Person 
{
public:
	string m_name;
	int m_age;
public:
	Person(string name,int age) //构造函数初始化数据
	{
		m_name = name;
		m_age = age;
	}
	bool operator==(Person& p) 
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name) 
		{
			return true;
		}
		return false;
	}
	bool operator !=(Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return false;
		}
		return true;
	}
};
void test01()
{
	Person p1("tom", 18);
	Person p2("tom", 18);
	if (p1 == p2) 
	{
		cout << "p1和p2是相等的~~~" << endl;
	}
	else 
	{
		cout << "p1和p2是不相等的~~~" << endl;
	}
	if (p1 != p2)
	{
		cout << "p1和p2是不相等的~~~" << endl;
	}
	else 
	{
		cout << "p1和p2是相等的~~~" << endl;
	}
}
int main() 
{
	test01();
	system("pause");
	return 0;
}