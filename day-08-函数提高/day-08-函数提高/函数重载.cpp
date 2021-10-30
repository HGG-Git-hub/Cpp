#include"global.h"
//参数个数不同
void fun()
{
	cout << "欢迎调用无参函数" << endl;
}
void fun(float a) 
{
	cout << "欢迎调用有参函数" << endl;
}
//参数类型不同
void fun(int a)
{
	cout << "欢迎调用int函数" << endl;
}
void fun(double a)
{
	cout << "欢迎调用doble函数" << endl;
}
//参数的顺序不同
void fun(int a,double b)
{
	cout << "欢迎调用int a,double b函数" << endl;
}
void fun(double a,int b)
{
	cout << "欢迎调用double a,int b函数" << endl;
}
int main() 
{
	//参数个数不同
	fun();
	fun(1.11);

	//参数类型不同
	fun(12);
	fun(12.12);

	//参数的顺序不同
	fun(1,1.1);
	fun(1.1,1);

	system("pause");
	return 0;
};