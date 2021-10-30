#include"global.h"

class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1 + v2;
	}
};
//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
void test01() 
{
	MyAdd My;
	My(10,10);
	cout << My(10, 10) << endl;
}
//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
class Print 
{
public:
	int count;//自己的状态，即自身的属性
public:
	Print() 
	{
		this->count = 0;
	}
public:
	void operator()(string text) 
	{
		cout << text << endl;
		count++;
	}
};
void test02() 
{
	Print p;
	p("ssss");
	p("ssss");
	p("ssss");
	p("ssss");
	cout << "调用了：" << p.count << "次" << endl;
}
//3.函数对象可以作为参数传递
void doPrint(Print &p,string text) 
{
	p(text);
}
void test03() 
{
	Print p1;
	doPrint(p1,"hello,C++");
}
int main() 
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
};