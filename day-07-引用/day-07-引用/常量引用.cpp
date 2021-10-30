#include"global.h"
//打印数据的函数(只打印)
void showValue(const int& val) 
{
	//val += 100;//const修饰引用时，无法修改引用的值，会报错
	cout << "val=" << val << endl;
}
int main() 
{

	//int a = 10;
	//int& ref = a;
	////int& ref = 10;//不合法，引用需要引用一块合法的内存空间(即内存名)

	//const int& ref = 10;//合法，是因为编译器进行了修改
	////修改成了：int temp = 10; int& ref = temp; (注意是内部修改)
	//ref = 20;//const修饰时，为只读状态不能修改
	
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
};