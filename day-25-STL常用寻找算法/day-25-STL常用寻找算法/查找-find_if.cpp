#include"global.h"
class greateFive 
{
public:
	bool operator()(int val) 
	{
		return  val > 5;
	}
};
//查找内置数据类型
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
		cout << "无" << endl;
	}
	else 
	{
		cout << "有" << endl;
		for (; it != v.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
//查找自定义数据类型
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

	Person p1("张三", 18);
	Person p2("李四", 19);
	Person p3("王五", 20);
	Person p4("赵六", 21);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	vector<Person>::iterator it = find_if(v1.begin(), v1.end(), FFF());
	if (it == v1.end()) 
	{
		cout << "未找到~" << endl;
	}
	else 
	{
		cout << "找到了~" << endl;
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