#include"global.h"
class Base 
{
public:
	//���麯��
	virtual void fun() = 0;
};
class Son1 :public Base 
{
public:
	virtual void fun() 
	{
		cout << "son1����fun����д" << endl;
	};
};
class Son2 :public Base
{
public:
	virtual void fun()
	{
		cout << "son2����fun����д" << endl;
	};
};
void test01() 
{
	Base* b = new Son1;
	b->fun();
	delete b;

	b = new Son2;
	b->fun();
	delete b;
}

int main() 
{
	test01();
	//test02();
	system("pause");
	return 0;
};