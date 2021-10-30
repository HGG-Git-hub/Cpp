#include"global.h"
int main() 
{
	int a = 10;

	int &b = a; //创建引用

	cout << a << endl; //输出10
	cout << b << endl; //输出10

	b = 100;

	cout << a << endl; //输出100
	cout << b << endl; //输出100
	
	system("pause");
	return 0;
};