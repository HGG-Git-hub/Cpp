#include"global.h"
class Person 
{
public:
	string m_name;
protected:
	string m_car;
private:
	int ID_cipher;//(银行卡密码)

//大括号里面的被称为类内
public:
	void func()
	{
		m_name = "张三";
		m_car = "小轿车";
		ID_cipher =1233 ;
	}
};
int main() 
{
	//实例化一个具体属性
	Person p1;
	p1.m_name = "李四";
	p1.m_car = "拖拉机";//已经在第7行设置保护权限，类外无法访问，所以报错
	p1.ID_cipher = 4321;////已经在第9行设置私有权限，类外无法访问，所以报错



	system("pause");
	return 0;
};