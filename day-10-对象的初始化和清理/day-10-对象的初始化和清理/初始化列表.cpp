#include"global.h"
class Person 
{
public:
	int m_a,m_b,m_c;
	//传统意义赋初始值
	/*Person(int a, int b, int c) 
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	//初始化列表
	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c) //
	{

	}
	
};
//传统意义赋初始值
//void test01() 
//{
//	Person p(10, 20, 30);
//	cout << "m_a的值："<<p.m_a<<"m_b的值：" <<p.m_b<<"m_c的值："<<p.m_c<< endl;
//}

int main() 
{

	//test01();//传统意义赋初始值
	
	Person p(30,20,10);//初始化列表

	cout << p.m_a << p.m_b << p.m_c << endl;

	system("pause");
	return 0;
};