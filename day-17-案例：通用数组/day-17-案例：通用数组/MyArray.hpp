#pragma once
#include<iostream>
#include<string>
using namespace std;
template<typename T>
class MyArray 
{
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;//��������
	int m_Size;//�����С�������е�Ԫ�ظ�����
public:
	//�вι��캯��
	MyArray(int Capacity) 
	{
		cout << "�вι���~" << endl;
		this->m_Capacity = Capacity; //��ʼ����������
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];//����T���͵����ݣ�����T���͵�ָ�룬��T���͵�ָ�����
	}
	//�������캯��
	MyArray(const MyArray& arr)
	{
		cout << "��������~" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		//ԭ�������������ݵĻ������俽�����µ�������
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator=��ֹǳ����
	MyArray& operator=(const MyArray& arr) 
	{
		cout << "operator����~" << endl;
		//���ж�ԭ���Ķ����Ƿ������ݣ��У����ͷ�
		if (this->pAddress != NULL) 
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//β�巨
	void Push_Back(const T & val) //const�޶������ֵ�����޸�
	{
		if (this->m_Capacity == this->m_Size) 
		{
			cout << "����~" << endl;
			return;
		}
		//�����е����һ��λ��=�����ֵ
		this->pAddress[this->m_Size] = val;
		this->m_Size++;//��������Ĵ�С
	}
	//βɾ��
	void Delete_Back() 
	{
		if (this->m_Size==0) 
		{
			cout << "����Ϊ��~" << endl;
			return;
		}
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ
		this->m_Size--;
	}
	//�û�ͨ���±�ķ�ʽ��������
	//index��ʾ�±꣬���ڼ���Ԫ��
	T& operator[](int index) 
	{
		return this->pAddress[index];//�����±��Ӧ��Ԫ��
	}
	//�������������
	int getCapacity() 
	{
		return this->m_Capacity;
	}
	//��������Ĵ�С
	int getSize() 
	{
		return this->m_Size;
	}
	//��������
	~MyArray() 
	{
		if (this->pAddress != NULL) 
		{
			cout << "��������~" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
};