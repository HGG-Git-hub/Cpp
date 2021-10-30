#include"global.h"
template<typename T>//模板声明
void swep(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1.自动类型推导，必须推导出一致的数据类型T，才可以使用
void test01() 
{
	int a = 10, b = 20;
	swep(a,b);
	cout << a << endl;
	cout << b << endl;
}
//2.模板必须要确定出T的数据类型，才可以使用
template<typename T>//模板声明
void func() //一个确定的模板
{
	cout << "func的调用~" << endl;
}
void test02() 
{
	//func();//报错的原因：模板没有确定T的数据类型

	func<double>();//解决的办法，自己指定类型，让编译器明确
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};