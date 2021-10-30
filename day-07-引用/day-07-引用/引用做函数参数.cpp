#include"global.h"
//交换函数：3种实现的方式
//1.值传递
void change01(int a,int b) 
{
	int temp = a;
	a = b;
	b = temp;
	cout <<"形参"<< a << " " << b << endl;//输出的是形参的值
}
//2.地址传递
void change02(int *a,int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "形参" << *a << " " << *b << endl;

}
//3.引用传递
//引用做函数参数，相当于给实参起了一个别名，本质还是同一块地址，所以当形参改变时，实参也会改变
void change03(int &A,int &B) 
{
	int temp = A;
	A = B;
	B = temp;
	cout << "形参" << A << " " << B << endl;
}
int main() 
{
	int a = 10, b = 20;
	//值传递,形参不会修饰实参
	change01(a,b);
	cout <<"实参" << a << " " << b << endl;//输出的是实参的值
	 
	//地址传递，形参会修饰实参(本质：改变值的地址)
	change02(&a,&b);
	cout << "实参" << a << " " << b << endl;//输出的是实参的值

	//引用传递,形参会修饰实参
	change03(a,b);
	cout << "实参" << a << " " << b << endl;//输出的是实参的值

	system("pause");
	return 0;
};