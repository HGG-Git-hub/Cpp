#include"global.h"
class Base1 
{
public:
	int m_a;
public:
	Base1() 
	{
		m_a = 100;
	}
};
class Base2 
{
public:
	int m_a;
public:
	Base2() 
	{
		m_a = 200;
	}
};
class Son :public Base1, public Base2 
{
public:
	int m_c;
	int m_d;
public:
	Son() 
	{
		m_c = 300;
		m_d = 400;
	}
};
void test01() 
{
	Son s;
	cout << "Son的字节数" << sizeof(Son) << endl;
	cout << "Base1中的m_a值：" << s.Base1::m_a << endl;
	cout << "Base2中的m_a值：" << s.Base2::m_a << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};