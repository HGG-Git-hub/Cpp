#include"global.h"

void test01() 
{
	//template<class T > T plus<T>加法仿函数
	plus<int>n1;
	cout << n1(40, 50) << endl;
	//template<class T > T minus<T>减法仿函数
	minus<int>n2;
	cout << n2(40, 50) << endl;
	//template<class T > T multiplies<T>乘法仿函数
	multiplies<int>n4;
	cout << n4(40, 50) << endl;
	//template<class T > T divides<T>除法仿函数
	divides<int>n5;
	cout << n5(50, 50) << endl;
	//template<class T > T modulus<T>取模仿函数
	modulus<int>n6;
	cout << n6(40, 50) << endl;
	//template<class T > T negate<T>取反仿函数
	negate<int>n7;
	cout << n7(50) << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};