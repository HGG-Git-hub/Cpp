#include"global.h"
class Person 
{
public:
	int m_age;//非静态成员变量,属于类的对象
	static int s_m_age;//静态成员变量，不属于类的对象
	void func() //非静态成员函数,，不属于类的对象
	{	
	}
	static void func1() //静态成员函数，不属于类的对象
	{
	}
};
int Person::s_m_age=0;//静态声明
void test01() 
{
	Person p;
	//空类占用的空间为1个字节
	/*是为了区分不同的空对象，不同的对象占用的内存位置不同*/
	cout << "空类size of =" << sizeof(p) << endl;
}
void test02() 
{
	Person p;
	//输出的结果可以看出class中的数据哪些是属于类的对象
	cout << "非空类size of ="<<sizeof(p)<<endl;
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};