#include"global.h"
void test01()
{
	//1.包含头文件

	//2.创建流对象
	ifstream ifs;
	//3.打开文件并判断文件是否打开成功
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读数据
	//第一种方式:数组接收，必须是char型的数组
	char a[1024] = {0};
	while (ifs >> a) //直接将ifs文件中的数据，输入到a数组中
	{
		cout << a << endl;
	}
	//第二种方式：流对象内置的getline函数，第一个参数：数组首地址，即数组名，第二个参数：空间，即能存放多大的数据
	char ba[1024] = { 0 };
	while (ifs.getline(ba,sizeof(ba))) 
	{
		cout << ba << endl;
	}
	//第三种方式：字符串接收,流对象内置的getline函数，第一个参数：流对象名称，第二个参数：字符串名称
	string st;
	while (getline(ifs, st)) 
	{
		cout << st << endl;
	}
	//第四种方式：单个字符一个个接收
	char c;
	while ((c=ifs.get())!=EOF) //EOF=end of files 文件的尾部
	{
		cout << c;
	}
	//5.关闭文件
	ifs.close();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};