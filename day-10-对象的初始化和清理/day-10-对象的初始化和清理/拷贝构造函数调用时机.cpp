#include"global.h"
class Person
{
public:
	int age = 0;
	Person() //默认构造
	{
		cout << "默认默认默认构造" << endl;
	}
	Person(int a) //有参构造
	{
		age = a;
		cout << "有参有参有参构造" << endl;
	}
	Person(const Person & p)//拷贝构造
	{
		age = p.age;
		cout << "拷贝拷贝拷贝构造" << endl;
	}
	~Person()
	{
		cout << "析构析构析构构造" << endl;
	}
};
//使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(10);
	Person p2(p1);
	cout << "p2的年龄："<<p2.age<<endl;
}
//值传递的方式给函数参数传值 
void dowork(Person p) //值传递
{

}
void test02() 
{
	Person a;//默认构造函数
	dowork(a);//拷贝构造函数
	//即调用dowork函数时，将参数传递时，相当于将a拷贝了一份传递给了p，
	//相当于Person p = a;
				
}
//以值方式返回局部对
Person dowork() 
{
	Person p1;
	cout << (int *)&p1 << endl;//输出地址
	return p1;//是将p1拷贝了一次进行传递
}
void test03() 
{
	Person p =dowork();
	cout << (int*)&p << endl;//输出地址
}
int main() 
{
	//test01();
	//test02();
	test03();
	
	system("pause");
	return 0;
};