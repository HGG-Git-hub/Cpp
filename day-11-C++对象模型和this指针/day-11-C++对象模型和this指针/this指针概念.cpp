#include"global.h"

class Person 
{
public:
	//当形参和成员变量同名时，可用this指针来区分
	//this指针指向  被调用的成员函数    所属的对象
	int m_age;
	Person(int age) 
	{
		this->m_age = age;
	}
	//返回*this指针的函数，注意函数开头的写法

	Person&  Person_add_age(const Person &p) 
	{
		this->m_age += p.m_age;

		//目前this指向的是被调用成员函数的对象p2的地址，*this就是解引用拿到了地址中的数值
		return *this;
	}
};
//解决名称冲突
void test01() 
{
	Person p(18);
	cout << p.m_age << endl;
}
//在类的非静态成员函数中返回对象本身
void test02() 
{
	Person p1(10);
	Person p2(10);

	p2.Person_add_age(p1).Person_add_age(p1).Person_add_age(p1);

	cout << p2.m_age << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};