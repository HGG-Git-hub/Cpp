#include"global.h"
//不要返回局部变量引用
int& test01() //该种写法表示引用的方式返回值，接收需要引用的方式接收
{
	int a = 10;//a是局部变量，存放在内存中的栈区，执行之后会释放，编译器仅会保留一次
	return a;
}
//函数调用作为左值
int& test02() 
{
	static int a = 10;//a静态变量，存放在内存的全局区，程序结束后由系统释放
	return a;
}
int main() 
{
	int& ref = test01();//引用的方式接收

	cout << "" << ref << endl;
	cout << "" << ref << endl;//第二次执行时，ref的值不在是10

	int& rsf = test02();
	cout << "" << rsf << endl;
	cout << "" << rsf << endl;

	//函数调用作为左值
	test02() = 1000;
	//当test02()这个函数执行完成后返回a的值，所以test02()=1000相当于a=1000，rsf为a的引用所以输出的值为1000
	cout << "" << rsf << endl;//第二次执行时，rsf的值不在是10
	cout << "" << rsf << endl;//第二次执行时，rsf的值不在是10

	system("pause");
	return 0;
};