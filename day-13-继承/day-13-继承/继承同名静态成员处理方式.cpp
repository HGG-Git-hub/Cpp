#include"global.h"
class Base 
{
public:
	static int m_a;//静态成员属性的特点，类内声明
public:
	static void fun() 
	{
		cout << "Base-static-fun()" << endl;
	}
	static void fun(int a)
	{
		cout << "Base-static-fun(int a)" << endl;
	}
};
int Base::m_a = 100;//静态成员属性的特点，类外初始化

class Son:public Base
{
public:
	static int m_a;
public:
	static void fun()
	{
		cout << "Son-static-fun()" << endl;
	}
};
int Son::m_a = 200;//类外初始化

//同名的成员属性
void test01() 
{
	//通过对象的方式访问
	cout << "通过对象的方式访问~" << endl;
	Son s;
	cout << "Son 中的值：" << s.m_a << endl;
	cout << "Base中的值：" << s.Base::m_a << endl;
	//通过类名的方式访问
	cout << "通过类名的方式访问~" << endl;

	cout << "Son 中的值：" << Son::m_a << endl;
	//下面两个的区别：
	/*第一个是直接访问父类中的m_a，第二个是通过子类访问子类继承父类中的成员属性*/
	cout << "Base中的值：" << Base::m_a << endl;

	cout << "Base中的值：" << Son::Base::m_a << endl;
	/*第一个双冒号前面表示通过类名的方式访问，第二个双冒号前面表示父类的作用域下*/
}
//同名的成员函数
void test02() 
{
	//通过对象访问
	cout << "通过对象的方式访问~" << endl;
	Son s;
	s.fun();
	s.Base::fun();
	s.Base::fun(100);
	//通过类名访问
	cout << "通过类名的方式访问~" << endl;
	Son::fun();
	Son::Base::fun();
	Son::Base::fun(100);
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};