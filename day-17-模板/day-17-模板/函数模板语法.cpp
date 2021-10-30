#include"global.h"
//引入
//两个整型数据交换的函数
void change_int_num(int &a,int &b) 
{
	int temp = a;
	a = b;
	b = temp;
}
//两个浮点型数交换的函数
void change_double_num(double &a,double &b) 
{
	double  temp = a;
	a = b;
	b = temp;
}
//引出-函数模板
template<typename T>//声明一个函数模板
void my_change(T &a,T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}
void  test01() 
{
	int a = 100;
	int b = 200;
	change_int_num(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	double c = 1.1;
	double d = 2.2;
	change_double_num(c,d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	//两种方式使用函数模板
	//1.自动类型推导
	my_change(a, b);//即自动识别
	my_change(c, d);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	//2.显式指定类型
	my_change<int>(a,b);
	my_change<double>(c,d);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}

int main() 
{
	test01();

	system("pause");
	return 0;
};