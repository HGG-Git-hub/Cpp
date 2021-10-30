#include"global.h"
//new的基本语法
int* func() 
{
	//在堆区创建一个数据
	int * p=new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;//释放该地址的内存

	cout << *p << endl;//释放后，再次运行会报错，没有权限访问该内存了，已经被释放了
}
//在堆区开辟一个数组
void test02() 
{
	int * arr =new int [10];//[10]表示可以存放10个元素的数组，返回的是数组首地址
	for (int i = 0; i < 10; i++) //赋值
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10; j++) //输出
	{
		cout << arr[j] << endl;
	}
	//释放数组，需要加一个[],意思是告诉编译器释放的为数组
	delete []arr;

}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};