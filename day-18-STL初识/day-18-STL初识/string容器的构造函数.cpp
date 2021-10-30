#include"global.h"

void test01() 
{
	//string本质是一个类，s1表示string类型的对象，构造函数由系统提供，即为默认构造
	string s1;

	//使用字符串s初始化
	const char* str = "hello,word~";
	string s2(str);
	cout << s2 << endl;

	//拷贝构造
	string s3(s2);
	cout << s3 << endl;

	//使用n个字符c初始化
	string s4(5, 'a');
	cout << s4 << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};