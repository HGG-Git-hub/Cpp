#include"global.h"
class Person 
{
	friend ostream& operator<<(ostream& out, Person& p);//全局函数做友元
private:
	int m_a;
	int m_b;
	//一般不用成员函数重载左移运算符，无法实现
public:
	Person(int a,int b) //构造函数，初始值
	{
		m_a = a;
		m_b = b;
	}
};
//只能用全局函数重载左移运算符
//ostream &cout 
//cout是输出流类型的数据，全局只能有一个，所以用引用的方式
ostream & operator<<(ostream &out,Person &p) //本质operator << (cout,p) 简化 cout << p
{
	out << "p.m_a= "<< p.m_a << " p.m_b= " << p.m_b << endl;
	return out;
}
void test01()
{
	Person p(10,10);//构造函数，初始值

	//重载后，简化输出
	cout << p << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};