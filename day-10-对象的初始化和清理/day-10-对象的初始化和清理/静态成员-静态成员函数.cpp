#include"global.h"

//静态成员函数
class Person 
{
public:
	static int m_age;//静态成员变量
	int m_num;//非静态成员变量

	/*特点：需要在类内声明，类外初始化,需要写在类的下面*/

	//静态成员函数（具有权限，私有的静态成员函数，类外无法访问）
	static void func() 
	{
		//静态变量可以被访问的原因：静态变量是共享的，
		m_age = 100;
		//m_num = 200; //静态成员函数无法访问非静态成员变量，会报错
		/*保存的原因：无法区分m_num是哪个对象的属性*/
		cout << "static void func" << endl;
		cout << m_age << endl;
	}
private:
	static void func1()//（具有权限，私有的静态成员函数，类外无法访问）
	{
	}
};
int Person::m_age = 0; //静态成员属性的初始化

void test01() 
{
	//访问静态成员函数的两种方式
	// 注意：访问非静态成员函数只能通过对象访问
	//通过对象访问
	Person p;
	p.func();
	//通过类名访问
	Person::func();
	//Person::fun1();//私有静态函数，无法访问
}
int main() 
{
	test01();

	system("pause");
	return 0;
};