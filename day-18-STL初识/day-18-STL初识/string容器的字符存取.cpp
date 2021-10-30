#include"global.h"

void test01()
{
	
	string str = "hello~";
	cout << str << endl;

	//char& operator[](int n); // 通过[]方式获取单个字符
	for (int i = 0; i < str.size(); i++) 
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//char& at(int n); // 通过at方法获取字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';

	str.at(1) = 'w';

	cout << str << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};