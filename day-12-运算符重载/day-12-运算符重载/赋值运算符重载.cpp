#include"global.h"
class Person 
{
public:
	int* m_age;
public:
	Person(int age)
	{
		m_age = new int(age);//在堆区开辟一个空间，来存放接收数据
	}
	~Person() 
	{
		if (m_age != NULL) 
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//赋值运算符重载
	Person& operator=(Person& p) 
	{
		//先判断是否有属性在堆区，如果有，先释放
		if (m_age != NULL) 
		{
			delete	m_age;
			m_age = NULL;
		}
		//重新在开辟一块内存空间（深拷贝）
		m_age = new int(*p.m_age);
		//返回自身对象，this指向自身
		return *this;
	}
};
void test01() 
{
	Person p1(18);
	Person p2(20);
	Person p3(22);
	p3 = p2 = p1;//赋值操作
	cout << "p1的年龄：" << *p1.m_age << endl;
	cout << "p2的年龄：" << *p2.m_age << endl;
	cout << "p3的年龄：" << *p3.m_age << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};