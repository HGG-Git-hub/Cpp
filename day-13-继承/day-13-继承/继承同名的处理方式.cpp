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
		cout << "Base�еĳ�Ա����~" << endl;
	}
	void fun(int a)
	{
		cout << "Base(int a)�еĳ�Ա����~" << endl;
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
		cout << "Son�еĳ�Ա����~" << endl;
	}
};
//ͬ����Ա���Եĵ���
void test01() 
{
	Son s1;
	//�����Լ��ĳ�Ա����
	cout << "Son �е�ֵΪ��" << s1.m_a << endl;
	//���ʴӸ���̳еĳ�Ա���ԣ����������򼴿ɣ�
	cout << "Base�е�ֵΪ��" << s1.Base::m_a << endl;
}
//ͬ����Ա�����ĵ���
void test02() 
{
	Son s1;
	//ֱ�ӵ����ǵ�������ĳ�Ա����
	s1.fun();
	//����������Ե��ø�����ͬ���ĳ�Ա����
	s1.Base::fun();
	//���ʸ��������صĺ�����һ����Ҫ��������
	s1.Base::fun(100);
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};