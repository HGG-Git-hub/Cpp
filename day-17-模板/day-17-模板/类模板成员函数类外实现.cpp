#include"global.h"
//模板类
template<typename T1,typename T2>
class Person 
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name, T2 age);//构造函数类内声明
	
	void showPerson();//成员函数类内声明
};
//构造函数类外实现
template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
//成员函数类外实现
template<typename T1, typename T2>
void Person<T1, T2>::showPerson() 
{
	cout << this->m_name << endl;
	cout << this->m_age << endl;
}


//普通类
class Person1
{
public:
	int m_name;
	string m_age;
public:
	Person1(int name, string  age);//构造函数类内声明

	void showPerson();//成员函数类内声明
};
//构造函数类外实现
Person1::Person1(int name, string  age) {}
//成员函数类外实现
void Person1::showPerson(){}

void test01() 
{
	Person<string, int>p("张三",19);
	p.showPerson();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};