#include"global.h"
class Person 
{
public:
	char m_name[64];
	int m_age = 19;
};
void test01() 
{
	//2.创建流对象
	ifstream ifs;
	//3.打开文件并判断文件是否打开成功
	ifs.open("Person.txt",ios::in|ios::binary);
	if (!ifs.is_open()) 
	{
		cout << "文件打开失败~" << endl;
		return;
	}
	//4.读文件
	Person p;
	ifs.read((char *)&p,sizeof(Person));

	cout << p.m_name << p.m_age << endl;
	//5.关闭文件
	ifs.close();
}
int main() 
{
	test01();
	system("pause");
	return 0;
};