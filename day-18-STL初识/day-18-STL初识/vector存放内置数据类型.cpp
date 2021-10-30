#include"global.h"
void myPrint(int val)
{
	cout << val << endl;
}
void test01() 
{
	//vector为编译器内置容器，包含其头文件直接使用即可，int表示定义一个int类型的数v
	vector<int>v;
	vector<int>a;

	//向容器v中插入数据
	v.push_back(10);//编译器自带,表示插入10这个数据
	v.push_back(20);//编译器自带,表示插入20这个数据
	v.push_back(30);//编译器自带,表示插入30这个数据
	v.push_back(40);//编译器自带,表示插入40这个数据

	//通过迭代器访问容器中的元素
	//v.begin()表示起始迭代器，指向容器中第一个元素
	vector<int>::iterator itBegin/*名字可以随便写*/ = v.begin();
	//v.end()表示结束迭代器，指向容器中最后一个元素的下一个位置
	vector<int>::iterator itEnd/*名字可以随便写*/ = v.end();

	//开始遍历数据（输出）
	//第一种遍历方式:先通过迭代器访问容器中的元素，再进行遍历
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//第二种遍历：将迭代器访问容器中的元素写在了for循环中，直接遍历
	for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++) 
	{
		cout << *itbegin << endl;
	}
	//第三种，直接使用编译器内置的遍历算法，需要包含头文件#include<algorithm>
	//先通过迭代器访问容器中的元素，再使用编译器内置的遍历算法
	for_each(v.begin(), v.end(), myPrint);
}

int main() 
{
	test01();

	system("pause");
	return 0;
};