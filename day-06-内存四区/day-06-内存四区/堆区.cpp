#include"global.h"
int * func() 
{	
	//new关键字可以将数据开辟到堆区
	//指针本身也是变量，存放在栈区，指针保存的数据存放在堆区
	//使用new关键字创建的堆区数据返回的是这个数据的地址，需要用一个指针接收，最后在解引用
	int*p=new int(10);
	return p;
}
int main() 
{

	int * q = func();

	cout << *q << endl;
	cout << *q << endl;

	system("pause");
	return 0;
};