#include"global.h"
class Base 
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class Son :public Base 
{
public:
	int m_d;
};
/*
跳转盘符 F : (需要查看的项目在哪个盘就跳转哪个盘)

跳转文件路径：cd(空格)具体路径(回车)

输入：dir

cl / d1 reportSingleClassLayout类名(空格)源文件名称（tab键会补齐）
*/
void test01() 
{
	cout << "占用内存字节：" << sizeof(Son) << endl;
	//结果为：16，子类继承父类的成员也算子类对象，一共4个int类型，4*4=16
	//父类中的私有成员，是被编译器给隐藏了，只是访问不到，可以继承
}
int main() 
{
	test01();

	system("pause");
	return 0;
};