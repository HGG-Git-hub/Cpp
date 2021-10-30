#include"global.h"
class Person 
{
private://私有权限

	//姓名	可读可写
	string m_name;
	//年龄	可读可写
	int age;
	//爱人	只写
	string m_lover;
public://通过成员函数，
	//设置姓名（写姓名）
	void setName(string name) 
	{
		m_name = name;
	}
	//获取姓名（读姓名）
	string getName() 
	{
		return m_name;
	}
	//设置年龄（写年龄）
	void setAge(int a) 
	{
		if (a < 0 || a>100) 
		{
			cout << "您输入的年龄有误" << endl;
			return;
		}
		age = a;
	}
	//获取年龄（读年龄）
	int getAge() 
	{
		return age;
	}
	//设置爱人（写爱人）
	void setDear(string name) 
	{
		m_lover = name;
	}
};
int main() 
{
	Person p1;
	p1.setName("张三");

	p1.setAge(11);

	p1.setDear("HGG");

	cout << p1.getName() << endl;

	cout << p1.getAge() << endl;

	system("pause");
	return 0;
};