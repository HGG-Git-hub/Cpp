#include"global.h"
int func01(int a = 10, int b = 20, int c = 30) 
{
	return a + b + c;
}
int func02(int a = 10, int b = 10);//函数的声明
int func02(int a, int b)
{
	return a + b;
}
//注意事项:
//1.某个形参有默认参数，那么从这个位置往后都得有默认参数(从左往右)
//2.函数的声明和函数的定义只能有一个有默认参数
int main() 
{
	cout << func01()<<endl;
	cout << func01(1,1,1) << endl; //如果我们给传入了数据，就有传入的，如果没传入，就用默认的
	cout << func02() << endl;

	system("pause");
	return 0;
};
