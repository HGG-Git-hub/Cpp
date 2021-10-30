#include"global.h"
//父类1
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//子类1 公有继承
class son1 :public Base1
{
public:
	void fun() 
	{
		m_a = 10;//父类中的公共权限，在子类中依然是公共权限
		m_b = 10;
	}
protected:
	void fun01() 
	{
		m_b = 10;//父类中的保护权限，在子类中依然是保护权限
	}
};
void test01() 
{
	son1 s;
	s.m_a = 10;//公共权限，类外也可以访问
	//s.m_b = 10; //保护权限，类内可以访问，类外不能访问
}

//父类2
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//子类2 保护继承
class son2 :protected Base2
{
protected:
	void fun() 
	{
		m_a = 100;//父类中的公共权限，在子类中成为了保护权限
		m_b = 100;//父类中的保护权限，在子类中依然是保护权限
	}
};
void test02() 
{
	son2 s2;
	//s2.m_a = 10;  //保护权限，类内可以访问，类外不能访问
	//s2.m_b = 10;  //保护权限，类内可以访问，类外不能访问
}

//父类3
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//子类1.3 私有继承
class son3 :private Base3 
{
private:
	void fun3() 
	{
		m_a = 100;//父类中的公共权限，在子类中成为了私有权限
		m_b = 100;//父类中的保护权限，在子类中成为了私有权限
		//m_c = 100;//父类中的私有权限，在子类中依然是私有权限，无法访问
	}
};
void test03() 
{
	son3 s3;
	//s3.m_a = 10000; //私有权限类外访问不到
	//s3.m_b = 10000; //私有权限类外访问不到
	//s3.m_c = 10000; //私有权限类外访问不到
	
}

int main() 
{

	system("pause");
	return 0;
};