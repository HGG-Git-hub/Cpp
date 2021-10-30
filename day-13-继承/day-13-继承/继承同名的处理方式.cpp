#include"global.h"
class Base 
{
public:
	int m_a;
public:
	Base() 
	{
		m_a = 100;
	}
	void fun()
	{
		cout << "Base中的成员函数~" << endl;
	}
	void fun(int a)
	{
		cout << "Base(int a)中的成员函数~" << endl;
	}
};
class Son :public Base
{
public:
	int m_a;
public:
	Son()
	{
		m_a = 200;
	}
	void fun() 
	{
		cout << "Son中的成员函数~" << endl;
	}
};
//同名成员属性的调用
void test01() 
{
	Son s1;
	//访问自己的成员属性
	cout << "Son 中的值为：" << s1.m_a << endl;
	//访问从父类继承的成员属性（加上作用域即可）
	cout << "Base中的值为：" << s1.Base::m_a << endl;
}
//同名成员函数的调用
void test02() 
{
	Son s1;
	//直接调用是调用自身的成员函数
	s1.fun();
	//加作用域可以调用父类中同名的成员函数
	s1.Base::fun();
	//访问父类中重载的函数，一样需要加作用域
	s1.Base::fun(100);
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};