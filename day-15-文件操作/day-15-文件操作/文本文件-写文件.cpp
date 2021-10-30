#include"global.h"

void test01() 
{

	//1.包含头文件

	//2.创建流对象
	ofstream ofs;
	
	//3.打开文件
	ofs.open("test.txt",ios::out);
	
	//4.写数据
	ofs << "day-15-写文件骚操作~" << endl;
	
	//5.关闭文件
	ofs.close();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};