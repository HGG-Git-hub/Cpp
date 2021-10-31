#include"global.h"
//统计内置数据类型
//普通函数
int plus_Five(int &q) 
{
	return q >= 5;
}
//仿函数
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
	
	//普通函数
	int num = count_if(v.begin(),v.end(), plus_Five);
	cout << "大于等于5的数有" << num << "个" << endl;
	//仿函数
	int nun = count_if(v.begin(), v.end(), plus_five());
	cout << "大于等于3的数有" << nun << "个" << endl;
}
//统计自定义数据类型
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

	Person p1("张三", 18);
	Person p2("李四", 19);
	Person p3("王五", 21);
	Person p4("赵六", 21);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);

	int num = count_if(v1.begin(),v1.end(), PPP());
	cout << "年龄大于等于20的数有" << num << "个" << endl;
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};