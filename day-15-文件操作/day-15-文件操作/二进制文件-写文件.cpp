#include"global.h"
class Person 
{
public:
	//c中的字符数组=C++中的string，但是建议使用字符数组，原因：底层还是使用C语言写的
	char m_name[64];
	int m_age;

};
void test01() 
{
	//2.创建流对象
	ofstream ofs;

	//即可以在创建流对象的同时，指定打开文件路径和打开文件的方式2和3等价于下一行
	//ofstream ofs("Person.txt",ios::out|ios::binary);
	
	//3.打开文件
	ofs.open("Person.txt", ios::out | ios::binary);

	//4.写文件
	Person p = {"张三",18};
	ofs.write((const char*)&p, sizeof(Person));

	int a = 10;
	ofs.write((const char*)&a,sizeof(int));

	//5.关闭文件
	ofs.close();

}
int main() 
{
	test01();

	system("pause");
	return 0;
};