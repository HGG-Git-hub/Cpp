#include"global.h"

void change(int* p, int* p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp;
	
}
//2.创建一个函数实现冒泡排序
//参数1 数组的首地址 参数2 数组的长度
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
int main() 
{
	//1.先创建一个数组
	int arr[10] = { 2,0,1,3,5,4,6,7,9,8 };
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, len);//传入数组和数组的长度

	//3.打印排序后的数组    
	printArray(arr, len);


	//int a = 10;
	////定义一个指针
	//int * p;
	////让指针p记录a的地址
	//p = &a;
	//cout <<&a<< endl;
	//cout<<p<<endl;
	////使用指针
 //   //可以通过解引用的方式来找到指针指向的内存中的数据
	//*p = a;

	//cout << *p << endl;

	//可以通过解引用的方式来修改指针指向的内存中的数据

	/**p = 100;
	cout << *p <<endl;
	cout << a << endl;

	cout << "占用内存空间：" << sizeof(int *) << endl;
	cout << "占用内存空间：" << sizeof(char *) << endl;
	cout << "占用内存空间：" << sizeof(float *) << endl;
	cout << "占用内存空间：" << sizeof(double *) << endl;*/

	////指针变量p指向内存地址编号为0的空间
	//int* p = NULL;
	////访问空指针报错
	////内存编号0-255为系统占用内存，不允许用户访问
	//cout << *p << endl;

	/*int* p = (int*)0x1100;

	cout << *p << endl;*/
	/*int a = 10, b = 20;*/
	//const int* p = &a;

	////常量指针
	//*p = 20;
	//p = &b;
	//cout<<*p << endl;
	
	////指针常量
	//int * const p = &a;
	//*p = 20;
	////p = &b;
	//cout << *p << endl;

	/*const int* const p = &a;
	cout<<*p<<endl;*/


	//int arr[] = {0,1,2,3,4,5,6,7,8,9 };
	//int* p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << endl;
	//	p++;
	//}
	//for (int j = 0; j < 10; j++) 
	//{
	//	cout << arr[j] << endl;
	//}


	//int a = 10, b = 20;
	//cout << a << endl;
	//cout << b << endl;
	//change(&a, &b);//函数调用
	//cout << a << endl;
	//cout << b << endl;

	system("pause");
	return 0;
}