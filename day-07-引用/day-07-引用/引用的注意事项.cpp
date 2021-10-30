#include"global.h"
int main() 
{
	int a = 10;
	int b = 20;
	//int& c;//错误，初始化时必须指定是谁的别名
	int& c = a;
	
	c = b;	//该操作为赋值操作，不是引用操作
			//赋值完后a和c都输出20
			//理解：a和c都表示一个内存空间，当把b的值赋予c时，更改了这个内存空间的数据，所以a和c的值都发生变化
			
	//int& c = b;//错误，引用在初始化后，不可以改变

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
	return 0;
}