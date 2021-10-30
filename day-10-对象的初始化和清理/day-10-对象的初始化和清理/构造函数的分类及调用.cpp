#include"global.h"
class Person
{
public:
	int age=10;
	//按参数分为：有参构造和无参构造
	Person() 
	{
		cout<<"Person无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person有参构造函数" << endl;
	}
	//按类型分为：普通构造和拷贝构造
	//拷贝构造函数
	//传进的数据类名必须一致，并且用引用的方式进行传递,最后用const限定，保证拷贝的数据一样
	Person(const Person &p) 
	{
		age = p.age;
		cout << "Person拷贝构造函数" << endl;
	}
	~Person() 
	{
		cout<<"Person的析构函数" << endl;
	}
};
//调用
//括号法
void test01() 
{
	//注意事项：调用默认构造函数时，不要加小括号(),编译器会理解成是一个函数声明
	Person p1;

	Person p2(10);//有参构造
	//cout << "p2的年龄：" << p2.age << endl;

	Person p3(p2);//拷贝构造
	//cout << "p3的年龄：" << p3.age << endl;
}
//显示法
void test02() 
{
	//注意：等号左边的称为匿名对象，使用完成后，会被立刻回收
	//不要利用拷贝构造函数，初始化匿名对象
	//Person(p3);//系统认为Person(p3)==Person p3;

	Person p1;					//默认构造函数调用
	Person p2 = Person(10);		//有参构造函数调用
	Person p3 = Person(p2);		//拷贝构造函数调用
}
//隐式转换法
void test03() 
{
	Person p4 = 10;//相当于Person p4=Person(10);编译器悄悄的给你进行了转换
	Person p5 = p4;//拷贝构造函数
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};