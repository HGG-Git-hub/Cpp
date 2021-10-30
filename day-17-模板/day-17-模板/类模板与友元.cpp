#include"global.h"
//让编译器提前知道模板Person类的存在
template<typename T1, typename T2>
class Person;

//全局函数，类外实现
template<typename T1, typename T2>
void printPerson2(Person<T1, T2>p)
{
	cout << p.m_name << "  类外实现  " << p.m_age << endl;
}

template<typename T1,typename T2>
class Person 
{
private:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name,T2 age) 
	{
		m_name = name;
		m_age = age;
	}

	//全局函数，类内实现
	friend void printPerson(Person<T1,T2>p)
	{
		cout << p.m_name << " 类内实现 " << p.m_age << endl;
	}
	//全局函数，类外实现
	//声明注意带<>
	friend void printPerson2<>(Person<T1, T2>p);//在类内声明
};

//全局函数类内实现的测试
void test01()
{
	Person<string,int>p("张三",19);
	printPerson(p);
}
//全局函数类外实现的测试
void test02() 
{
	Person<string, int>p1("李四",20);
	printPerson2(p1);
}

int main() 
{
	test01();
	//test02();

	system("pause");
	return 0;
};