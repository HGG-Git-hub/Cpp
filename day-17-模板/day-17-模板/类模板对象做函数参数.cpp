#include"global.h"

template<typename T1,typename T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name,T2 age) 
	{
		m_name = name;
		m_age = age;
	}
	void showPerson() 
	{
		cout << "姓名：" << m_name << endl;
		cout << "年龄：" << m_age << endl;
	}
};
//指定传入的类型---直接显示对象的数据类型
void PrintPerson01(Person<string, int>&p1)
{
	p1.showPerson();
}
void test01() 
{
	Person<string,int>p1("张三",18);
	PrintPerson01(p1);
}
//参数模板化-- - 将对象中的参数变为模板进行传递
template<typename T1,typename T2>
void PrintPerson02(Person<T1, T2>&p2)
{
	p2.showPerson();
	//cout << "T1的类型为：" << typeid(T1).name() << endl;
	//cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test02() 
{
	Person<string, int>p2("李四",19);
	PrintPerson02(p2);
}
//整个类模板化 ---将这个对象类型 模板化进行传递
template<typename T>
void PrintPerson03(T &p3) //将Person<string,int>整体模板化为T
{
	p3.showPerson();
	cout << typeid(T).name() << endl;
}
void test03() 
{
	Person<string, int>p3("王五",20);
	PrintPerson03(p3);
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};