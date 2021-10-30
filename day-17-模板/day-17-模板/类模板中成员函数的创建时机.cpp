#include"global.h"
//普通类
class Person1 
{
public:
	void showPerson1() 
	{
		cout << "1111111111111" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "2222222222" << endl;
	}
};
//类模板
template<typename T>
class Myclass 
{
public:
	T a;
public:
	void fun1() 
	{
		a.showPerson1();//公共权限的成员函数
	}
	void fun2() 
	{
		a.showPerson2();//公共权限的成员函数
	}
};
void test01() 
{
	Myclass<Person1>a;
	a.fun1();	
	Myclass<Person2>b;
	b.fun2();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};