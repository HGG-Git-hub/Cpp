#include"global.h"
//普通函数调用时可以发生自动类型转换（隐式类型转换）
//普通函数
int add(int a, int b) 
{
	return a + b;
}
//函数模板
template<typename T>
T m_add(T a, T b)
{
	return a + b;
}
void test01() 
{
	int a = 10;
	int b = 20;
	char c = 'c';//将字符c转换成了对应的ASCII码
	cout << add(a,c) << endl;

	//自动类型推导
	cout << m_add(a, b) << endl;
	//cout << m_add(a, c) << endl;//报错的原因：自动类型推导不会进行隐式转换
	//显示指定类型
	cout << m_add<int>(a, c) << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};