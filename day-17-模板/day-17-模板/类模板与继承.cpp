#include"global.h"
template<typename T>
class Base 
{
public:
	T m;
};
//class Son1 :public Base{};//错误
//子类在声明的时候，要指定出父类中T的类型
class Son1 :public Base<int>{};
//如果想灵活指定出父类中T的类型，子类也需要变成类模板
template<typename T1,typename T2>
class Son2 :public Base<T2> 
{
public:
	T1 a;
public:
	Son2() 
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};
void test01() 
{
	Son2<int,string>s;//int传给了T1，string传给了T2
	s.m = "张三";
	s.a = 20;
	cout << "Son2:中的s.m:" << s.m << endl;
	cout << "Son2:中的s.m:" << s.a << endl;
}
template<typename T>
class Son3 :public Base<T>
{
public:
	T a;
public:
	Son3() 
	{
		cout << typeid(T).name() << endl;
	}
};
void test02()
{
	Son3<int>s;//int既传给了子类又传给了父类
	s.m = 18;
	s.a = 20;
	cout << "Son3:中的s.m:" << s.m << endl;
	cout << "Son3:中的s.a:" << s.a << endl;
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};