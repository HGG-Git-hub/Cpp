#include"global.h"
//����1
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����1 ���м̳�
class son1 :public Base1
{
public:
	void fun() 
	{
		m_a = 10;//�����еĹ���Ȩ�ޣ�����������Ȼ�ǹ���Ȩ��
		m_b = 10;
	}
protected:
	void fun01() 
	{
		m_b = 10;//�����еı���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
	}
};
void test01() 
{
	son1 s;
	s.m_a = 10;//����Ȩ�ޣ�����Ҳ���Է���
	//s.m_b = 10; //����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ܷ���
}

//����2
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����2 �����̳�
class son2 :protected Base2
{
protected:
	void fun() 
	{
		m_a = 100;//�����еĹ���Ȩ�ޣ��������г�Ϊ�˱���Ȩ��
		m_b = 100;//�����еı���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
	}
};
void test02() 
{
	son2 s2;
	//s2.m_a = 10;  //����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ܷ���
	//s2.m_b = 10;  //����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ܷ���
}

//����3
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����1.3 ˽�м̳�
class son3 :private Base3 
{
private:
	void fun3() 
	{
		m_a = 100;//�����еĹ���Ȩ�ޣ��������г�Ϊ��˽��Ȩ��
		m_b = 100;//�����еı���Ȩ�ޣ��������г�Ϊ��˽��Ȩ��
		//m_c = 100;//�����е�˽��Ȩ�ޣ�����������Ȼ��˽��Ȩ�ޣ��޷�����
	}
};
void test03() 
{
	son3 s3;
	//s3.m_a = 10000; //˽��Ȩ��������ʲ���
	//s3.m_b = 10000; //˽��Ȩ��������ʲ���
	//s3.m_c = 10000; //˽��Ȩ��������ʲ���
	
}

int main() 
{

	system("pause");
	return 0;
};