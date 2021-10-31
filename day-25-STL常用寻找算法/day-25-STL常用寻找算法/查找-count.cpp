#include"global.h"
//统计内置数据类型
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

	int num = count(v.begin(),v.end(),5);
	cout << num << endl;
}
//统计自定义数据类型
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
	bool operator==(const Person &p) 
	{
		if (this->m_name == p.m_name || this->m_age == p.m_age)
			return true;
		else
			return false;
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

	Person p5("美玉",21);
	int num = count(v1.begin(),v1.end(),p5);
	cout << "和p5相同年龄的人有：" << num << "个" << endl;
}
int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};