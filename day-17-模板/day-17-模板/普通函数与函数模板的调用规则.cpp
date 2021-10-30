#include"global.h"
//如果函数模板和普通函数都可以实现，优先调用普通函数
void myprint(int a, int b) 
{
	cout << "普通函数的调用~" << endl;
}
template<typename T>
void myprint(T a,T b) 
{
	cout << "两个参数的函数模板的调用~" << endl;
}
template<typename T>
void myprint(T a, T b,T c)
{
	cout << "三个参数的函数模板的调用~" << endl;
}
void test01() 
{
	int a = 10, b = 20, c = 30;

	myprint(a, b);
	myprint<>(a, b);//用空模板参数列表来强制调用函数模板
	myprint<>(a,b,c); //函数模板也可以发生重载

	char a = 'a';
	char b = 'b';
	myprint(a,b);//函数模板可以产生更好的匹配，优先调用函数模板
}
int main() 
{
	test01();

	system("pause");
	return 0;
};