#include"global.h"

//**默认构造函数（无参，函数体为空）
//**默认析构函数（无参，函数体为空）
//**默认拷贝构造函数，对属性进行值拷贝(值拷贝)
class Person 
{
public:
	int m_age;
	/*Person() 
	{
		cout << "默认构造函数" << endl;
	}*/
	Person(int age)
	{
		m_age = age;
		cout << "有参构造函数" << endl;
	}
	//Person(const Person& p) 
	//{
	//	m_age = p.m_age;
	//	cout << "拷贝构造函数" << endl;
	//}
	~Person() 
	{
		cout << "析构函数" << endl;
	}
};
//void test01() 
//{
//	Person p;
//	p.m_age = 18;
//	Person p2(p);
//	cout<<"拷贝函数中的值："<<p2.m_age<<endl;
//}
void test02() 
{
	//Person p;//会报错
	Person p(18);
	Person p2(p);
	cout<<"p2:"<<p2.m_age<<endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};