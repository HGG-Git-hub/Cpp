#include"global.h"
//排序模板
template<typename T>
void Sort(T &a,T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}
//排序模板
template<typename T>
void mySort(T Array,int len) 
{
	for (int i = 0; i < len; i++) 
	{
		int max = i;//先认定最大值是第一个
		for (int j = i + 1; j < len; j++) 
		{
			if (Array[max] < Array[j]) 
			{
				max = j;
			}
		}
		if (max != i) 
		{
			//交换max和i下标的元素
			Sort(Array[max],Array[i]);
		}
	}
}
//打印函数模板
template<typename T>
/*写int不写T的原因:
	如果写T，
		编译器推导array是char型，len是int型，不一致，会报错
		如果自己写出具体的类型，编译器就不用自己推导，可以直接用*/
void printArray(T array[], int len)
{
	for (int i = 0; i < len; i++) 
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
void test01() //测试char数组
{
	char Array[] = "acbedf";//数组
	int num = sizeof(Array) / sizeof(char);//数组长度

	mySort(Array, num);//调用排序模板

	printArray(Array,num);//调用打印模板
}
void test02() //测试int数组
{
	int intArray[] = { 7,6,5,2,16,32,4 };//数组

	int num = sizeof(intArray) / sizeof(int);//数组长度

	mySort(intArray, num);//调用排序模板

	printArray(intArray, num);//调用打印模板
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
};