#include"global.h"
class my_integer 
{
	friend ostream& operator<<(ostream& cout, my_integer m_int);
private:
	int m_num;
public:
	my_integer() 
	{
		m_num = 0;
	}
	//重载    前置++    运算符
	

	//返回引用是为了对一个数据进行操作
	my_integer& operator++()
	{
		//先进行++运算
		m_num++;
		//在进行自身的返回，this指针指向自身，*this解引用，返回的类型是my_integer
		return *this;
	}
	//重载     后置++    运算符
	
	//void operator++(int),int表示占位符，用来区分前置和后置递增
	my_integer  operator++(int) 
	{
		//先记录当前的值
		my_integer temp = *this;
		//再将当前的值++
		m_num++;
		//返回记录的值
		return temp;
	}
};
ostream& operator<<(ostream& cout, my_integer m_int) 
{
	cout << m_int.m_num;
	return cout;
}
void test01() 
{
	my_integer m_int;//自定义的类中的整型元素
	cout << ++m_int << endl;
}
void test02() 
{
	my_integer m_int;
	cout << m_int++ << endl;
	cout << m_int << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};