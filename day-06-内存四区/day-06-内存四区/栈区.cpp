#include"global.h"

int* func(int b) //返回值的类型应该与定义的函数类型相同
{
	b = 100;
	int a = 10;
	
	return &a;
}


int main() 
{
	int* p = func(1);//调用函数，写函数名称即可
	//指针p拿到的是地址，需要拿到地址里的值，解指针*p即可
	cout << *p << endl;	//第一次能拿到地址里的值，是因为编译器会做一次保留
	cout << *p << endl; //第二次拿不到，编译器已将该值释放
	

	system("pause");
	return 0;
}