#include"global.h"

class Person
{
public:
	int m_age;//年龄属性
	int *m_hight;//身高属性
	Person()
	{
		cout << "默认构造函数" << endl;
	}
	Person(int age,int hight)
	{
		m_age = age;
		//new开辟了堆区地址，返回的是地址，所以需要指针接收
		//new是程序员手动开辟的地址，需要手动释放，一般在析构函数中delete
		m_hight = new int(hight);

		cout << "有参构造函数" << endl;
	}
	//浅拷贝带来的问题，堆区的重复释放
	//解决的办法：在堆区另外再申请一块地址(new)，不同的地址里存放相同的数据
	//自行构造拷贝函数,解决一下浅拷贝带来的的问题
	Person(const Person& p) 
	{
		m_age = p.m_age;
		/*
		Person类中的对象p的m_hight是一个地址，*p.m_hight表示解引用得到地址中的数据,
		new给该数据在堆区开辟一块新的地址，将该地址赋予指针m_hight,需要操作数据时解引用m_hight
		*/
		m_hight = new int(*p.m_hight);

		cout<<"拷贝函数：" << endl;
	}
	~Person()
	{
		//析构代码，将堆区开辟的数据释放干净
		if (m_hight != NULL) 
		{
			delete m_hight;
			m_hight = NULL;
		}
		cout << "析构函数" << endl;
	}
};
void test01()
{
	Person p1(18, 160);
	cout << "年龄：" << p1.m_age << "身高：" << *p1.m_hight << endl;

	Person p2(p1);
	cout << "年龄：" << p1.m_age << "身高：" << *p1.m_hight << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
};