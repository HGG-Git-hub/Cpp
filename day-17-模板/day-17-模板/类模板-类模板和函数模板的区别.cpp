#include"global.h"

//类模板
//类模板在模板参数列表中可以有默认参数
template<typename AgeType=int, typename NameType=string>
class Person
{
public:
	AgeType m_age;
	NameType m_name;
public:
	Person(AgeType age, NameType name) //构造函数赋初值
	{
		m_age = age;
		m_name = name;
	}
	void showPerson() 
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
};
//类模板没有自动类型推导的使用方式
void test01() 
{
	//Person p1(18,"张三");//错误的原因：类模板不会自动推导类型
	Person<int, string>p1(18,"张三");
	p1.showPerson();
}
//类模板在模板参数列表中可以有默认参数
void test02() 
{
	//有默认参数列表时，任旧需要<>不能写成Person p2(19,"李四");
	Person<>p2(19,"李四");
	p2.showPerson();
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};