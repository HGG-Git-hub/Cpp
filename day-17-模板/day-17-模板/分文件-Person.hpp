#pragma once
#include<iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;;
public:
	Person(T1 name, T2 age);
	void showPerson();
};
template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<typename T1, typename T2>
void Person<T1, T2>::showPerson()
{
	cout << m_name << " " << m_age << endl;
}