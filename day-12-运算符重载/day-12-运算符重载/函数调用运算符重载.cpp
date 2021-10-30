#include"global.h"
class My_print 
{
public:
	void operator()(string test) 
	{
		cout << test << endl;
	}
};
class MyAdd 
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void My_print02(string test) 
{
	cout << test << endl;
}
void test01() 
{
	My_print myprint;

	myprint("hello,C++");//函数调用运算符重载，非常类似函数调用

	My_print02("hello,python");//函数调用
}
void test02() 
{
	MyAdd myadd;

	int res=myadd(100,200);

	cout << res << endl;

	//匿名函数对象
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
};