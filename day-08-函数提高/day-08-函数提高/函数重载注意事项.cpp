#include"global.h"
//引用作为重载条件
void fun(int& A) 
{
	cout << "欢迎调用int& a的函数" << endl;
}
void fun(const int& A) 
{
	cout << "欢迎调用const int& a的函数" << endl;
}
//函数重载遇到默认参数
void fun1(int a,int b = 10)
{
	cout << "欢迎调用(int a,int b)的函数" << endl;
}void fun1(int a)
{
	cout << "欢迎调用(int a)的函数" << endl;
}
int main()
{
	//int a = 10;
	//fun(a);//int& A=a;合法  加const之后不能修饰变量，不合法
	//fun(10);//int& A=10;不合法  const int& A=10; 合法

	//fun1(20);//函数重载遇到默认参数,很容易出现二义性，只能尽量避免

	system("pause");
	return 0;
};