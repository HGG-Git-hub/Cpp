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
	cout << "Son���ֽ���" << sizeof(Son) << endl;
	cout << "Base1�е�m_aֵ��" << s.Base1::m_a << endl;
	cout << "Base2�е�m_aֵ��" << s.Base2::m_a << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};