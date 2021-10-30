#include"global.h"
class Person
{
	
public:
	//对象的初始化-构造函数
	Person()
	{
		cout << "Person的构造函数" << endl;
	}
	//对象的清理-析构函数
	~Person() 
	{
		cout<<"~Person的析构函数" << endl;
	}
};
void test01()
{
	Person p;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};