#include<iostream>
#include<string>
#include<algorithm>//内置算法
#include<vector>//容器
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
	Person p1("张三", 19);
	Person p2("张四", 18);
	Person p3("张五", 17);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//遍历：第一种方式
	for (vector<Person>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++) 
	{
		//两者等价，itbegin的本质是指针
		//cout << (*itbegin).m_name<<" "<<(*itbegin).m_age << endl;
		cout << itbegin->m_name << itbegin->m_age << endl;
	}
}
//自定义数据类型的指针
void test02() 
{
	vector<Person*>v;
	Person p1("张三", 19);
	Person p2("张四", 18);
	Person p3("张五", 17);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//两者等价
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
