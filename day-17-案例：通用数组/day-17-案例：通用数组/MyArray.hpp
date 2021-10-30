#pragma once
#include<iostream>
#include<string>
using namespace std;
template<typename T>
class MyArray 
{
private:
	T* pAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;//数组容量
	int m_Size;//数组大小（数组中的元素个数）
public:
	//有参构造函数
	MyArray(int Capacity) 
	{
		cout << "有参构造~" << endl;
		this->m_Capacity = Capacity; //初始化数组容量
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];//开辟T类型的数据，返回T类型的指针，用T类型的指针接收
	}
	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		cout << "拷贝构造~" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//原来数组中有数据的话，将其拷贝到新的数组中
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=防止浅拷贝
	MyArray& operator=(const MyArray& arr) 
	{
		cout << "operator构造~" << endl;
		//先判断原来的堆区是否有数据，有，先释放
		if (this->pAddress != NULL) 
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//尾插法
	void Push_Back(const T & val) //const限定传入的值不可修改
	{
		if (this->m_Capacity == this->m_Size) 
		{
			cout << "已满~" << endl;
			return;
		}
		//数组中的最后一个位置=传入的值
		this->pAddress[this->m_Size] = val;
		this->m_Size++;//更新数组的大小
	}
	//尾删法
	void Delete_Back() 
	{
		if (this->m_Size==0) 
		{
			cout << "数组为空~" << endl;
			return;
		}
		//让用户访问不到最后一个元素，即为尾删
		this->m_Size--;
	}
	//用户通过下标的方式访问数组
	//index表示下标，即第几个元素
	T& operator[](int index) 
	{
		return this->pAddress[index];//返回下标对应的元素
	}
	//返回数组的容量
	int getCapacity() 
	{
		return this->m_Capacity;
	}
	//返回数组的大小
	int getSize() 
	{
		return this->m_Size;
	}
	//析构函数
	~MyArray() 
	{
		if (this->pAddress != NULL) 
		{
			cout << "析构函数~" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
};