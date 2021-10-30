#include"global.h"
//类对象作为类成员

//手机类
class Phone 
{
public:
	string m_Pname;//手机种类
	//初始化列表
	Phone(string Pname) :m_Pname(Pname) 
	{
		cout<<"手机类" << endl;
	}
	~Phone() 
	{
		cout << "手机类xigou" << endl;
	}
};
//人类
class Person 
{
public:
	string m_name;//人的名字
	Phone m_Phone;//人使用的手机品牌
	//Phone m_name = Pname //隐式转换法
	//Phone m_name =Phone Pname
	Person(string name, string Pname) :m_name(name), m_Phone(Pname) 
	{
		cout << "人类" << endl;
	}
	~Person() 
	{
		cout << "人类xigou" << endl;
	}
};
void test01() 
{

	//Phone phone("OPPO");
	//cout<<phone.m_Pname<<endl;

	Person per("张三", "OPPO");

	cout << per.m_name << endl;
	cout << per.m_Phone.m_Pname << endl;
}

int main() 
{
	

	test01();

	system("pause");
	return 0;
};