#include"global.h"
class Base 
{
public:
	static int m_a;//��̬��Ա���Ե��ص㣬��������
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
int Base::m_a = 100;//��̬��Ա���Ե��ص㣬�����ʼ��

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
int Son::m_a = 200;//�����ʼ��

//ͬ���ĳ�Ա����
void test01() 
{
	//ͨ������ķ�ʽ����
	cout << "ͨ������ķ�ʽ����~" << endl;
	Son s;
	cout << "Son �е�ֵ��" << s.m_a << endl;
	cout << "Base�е�ֵ��" << s.Base::m_a << endl;
	//ͨ�������ķ�ʽ����
	cout << "ͨ�������ķ�ʽ����~" << endl;

	cout << "Son �е�ֵ��" << Son::m_a << endl;
	//��������������
	/*��һ����ֱ�ӷ��ʸ����е�m_a���ڶ�����ͨ�������������̳и����еĳ�Ա����*/
	cout << "Base�е�ֵ��" << Base::m_a << endl;

	cout << "Base�е�ֵ��" << Son::Base::m_a << endl;
	/*��һ��˫ð��ǰ���ʾͨ�������ķ�ʽ���ʣ��ڶ���˫ð��ǰ���ʾ�������������*/
}
//ͬ���ĳ�Ա����
void test02() 
{
	//ͨ���������
	cout << "ͨ������ķ�ʽ����~" << endl;
	Son s;
	s.fun();
	s.Base::fun();
	s.Base::fun(100);
	//ͨ����������
	cout << "ͨ�������ķ�ʽ����~" << endl;
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