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
	cout << "arr1�������" << endl;
	printArray(arr1);
	cout << "������" << arr1.getCapacity() << endl;
	cout << "��С: " << arr1.getSize() << endl;
	
	MyArray<int>arr2(arr1);
	cout << "arr2�������" << endl;
	printArray(arr2);
	//βɾ
	arr2.Delete_Back();
	cout << "βɾ���Ч����" << endl;
	cout << "������" << arr2.getCapacity() << endl;
	cout << "��С: " << arr2.getSize() << endl;

	//MyArray<int>arr3(100);
	//arr3 = arr1;*/
}
//�����Զ������͵�����
class Person 
{
public:
	int m_age;
	string m_name;
public:
	Person() {}//Ĭ�Ϲ��캯��
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
		cout << "������" <<p[i].m_name<< "���䣺" << p[i].m_age<< endl;
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
	//�����ݲ��뵽������
	p.Push_Back(p1);
	p.Push_Back(p2);
	p.Push_Back(p3);
	p.Push_Back(p4);
	p.Push_Back(p5);
	//��ӡ���
	printArray1111(p);

	cout << "������" << p.getCapacity() << endl;
	cout << "��С: " << p.getSize() << endl;
}

int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};