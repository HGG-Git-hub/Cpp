#include"global.h"
class Person 
{
public:
	int m_a,m_b,m_c;
	//��ͳ���帳��ʼֵ
	/*Person(int a, int b, int c) 
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	//��ʼ���б�
	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c) //
	{

	}
	
};
//��ͳ���帳��ʼֵ
//void test01() 
//{
//	Person p(10, 20, 30);
//	cout << "m_a��ֵ��"<<p.m_a<<"m_b��ֵ��" <<p.m_b<<"m_c��ֵ��"<<p.m_c<< endl;
//}

int main() 
{

	//test01();//��ͳ���帳��ʼֵ
	
	Person p(30,20,10);//��ʼ���б�

	cout << p.m_a << p.m_b << p.m_c << endl;

	system("pause");
	return 0;
};