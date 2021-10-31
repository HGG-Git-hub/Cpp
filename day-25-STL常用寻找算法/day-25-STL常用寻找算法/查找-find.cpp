#include"global.h"

//查找内置数据类型
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}

	//find 查找元素
	//查找是否有5这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) 
	{
		cout << "无" << endl;
	}
	else 
	{
		cout << "有" << endl;
	}	
}
//自定义数据类型
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
	//自定义的数据类型需要重载==号，让底层代码知道如何对比
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
	Person p1("张三", 18);
	Person p2("李四", 19);
	Person p3("王五", 20);
	Person p4("赵六", 21);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	Person p5("赵六",21);

	//找一下有没有p5这个人，在容器中

	vector<Person>::iterator it = find(v1.begin(), v1.end(), p5);
	if (it == v1.end())
	{
		cout << "无";
	}
	else 
	{
		cout << "有" << " " << endl;;
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