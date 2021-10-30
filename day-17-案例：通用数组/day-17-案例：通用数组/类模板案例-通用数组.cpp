#include<iostream>
#include<string>
#include"MyArray.hpp"
using namespace std;
void printArray(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++) 
	{
		cout << arr[i] << endl;
	}
}
void test01() 
{
	MyArray<int>arr1(5);
	for (int i=0;i<5;i++) 
	{
		arr1.Push_Back(i);
	}
	cout << "arr1的输出：" << endl;
	printArray(arr1);
	cout << "容量：" << arr1.getCapacity() << endl;
	cout << "大小: " << arr1.getSize() << endl;
	
	MyArray<int>arr2(arr1);
	cout << "arr2的输出：" << endl;
	printArray(arr2);
	//尾删
	arr2.Delete_Back();
	cout << "尾删后的效果：" << endl;
	cout << "容量：" << arr2.getCapacity() << endl;
	cout << "大小: " << arr2.getSize() << endl;

	//MyArray<int>arr3(100);
	//arr3 = arr1;*/
}
//测试自定义类型的数据
class Person 
{
public:
	int m_age;
	string m_name;
public:
	Person() {}//默认构造函数
	Person(string name,int age) 
	{
		this->m_name = name;
		this->m_age = age;
	}
};
void printArray1111(MyArray<Person>& p)
{
	for (int i = 0; i < p.getSize(); i++) 
	{
		cout << "姓名：" <<p[i].m_name<< "年龄：" << p[i].m_age<< endl;
	}
}
void test02() 
{
	MyArray<Person>p(10);
	Person p1("a", 1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	Person p5("e", 5);
	//将数据插入到数组中
	p.Push_Back(p1);
	p.Push_Back(p2);
	p.Push_Back(p3);
	p.Push_Back(p4);
	p.Push_Back(p5);
	//打印输出
	printArray1111(p);

	cout << "容量：" << p.getCapacity() << endl;
	cout << "大小: " << p.getSize() << endl;
}

int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};