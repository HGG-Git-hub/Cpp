#include"global.h"

void test01() 
{
	//string substr(int pos = 0, int n = npos)const;//返回由pos开始的n个字符组成的字符串
	string str = "I_Love_You_DML";

	string s = str.substr(2, 4);

	cout << s << endl;
}
//实用操作-截取邮箱的用户名
void test02() 
{
	string email = "8023hgg@gmail.com";

	int sum = email.find('@');

	string sum1 = email.substr(0,sum);

	cout << sum1 << endl;
}
int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};