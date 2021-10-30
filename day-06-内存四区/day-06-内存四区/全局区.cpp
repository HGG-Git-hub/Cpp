#include"global.h"
//函数体外的称为全局变量
int g_a = 10;
int g_b = 10;
//const修饰的全局变量
const int c_g_a = 10;
int main()
{
	//全局区包括：全局变量、静态变量、常量

	//函数体里的称为局部变量
	int a = 10;
	int b = 10;
	//局部变量
	cout << (int)&a << endl;
	cout << (int)&b << endl;
	cout << "------" << endl;

	//全局变量
	cout << (int)&g_a << endl;
	cout << (int)&g_b << endl;
	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << (int)&s_a << endl;
	cout << (int)&s_b << endl;

	//常量又分为字符串常量和const修饰的变量
	//字符串常量
	cout << (int)&"hell,word" << endl;
	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量
	cout << (int)&c_g_a << endl;
	//const修饰的局部变量
	const int c_l_a = 10;
	cout << (int)&c_l_a << endl;

	system("pause");
	return 0;
};