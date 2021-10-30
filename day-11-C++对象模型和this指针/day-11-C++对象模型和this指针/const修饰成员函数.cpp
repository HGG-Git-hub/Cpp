#include"global.h"
class Person
{
public:
	int m_a;
	mutable int m_b;

	//指针的本质，指针常量，指针的指向不可以被修改
	/*在成员函数后面加const，修饰的是指针，
	  const* (常量指针)，不能修改常量，如果不加const
	  指针的指向可以改变，即能修改常量值，this->m_age=10;不会报错
	*/
	void showPerson()const//常函数
	{
		//m_age = 10;//成员函数内部都有隐藏的this指针
		//报错的原因，当本函数被调用时，this指针指向了p，指针指向的值无法在修改，所以报错
		//this->m_a=10; //等价于上上行代码

		//this =NULL;//指针的本质，指针常量，指针的指向不可以被修改

		this->m_b = 100;//如果想在常函数中修改，在成员属性前加mutbale(可变的)
	}
	void func() {}
};
void test01() 
{
	Person p;
	p.showPerson();
}
//常对象
void test02() 
{
	const Person p1;//常对象
	//p1.m_a = 100; //常对象，无法修改
	p1.m_b = 200; //m_b有mutable修饰，可以修改

	//常对象只能调用常函数
	p1.showPerson();
	//p1.func();  //func()不是常函数
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};