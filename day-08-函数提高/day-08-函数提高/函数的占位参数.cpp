#include"global.h"
void func(int a, int) //占位参数
{
	cout << "I love you" << endl;
}
void func1(int a, int = 10) //展位参数可以有默认参数
{
	cout << "I love you too" << endl;
}

int main() 
{
	func(10,10);

	func1(10);

	system("pause");
	return 0;
};