#include"global.h"
void test01()
{

	//string& operator+=(const char* str);//重载 += 操作符
	string str1 = "去";
	str1 += "留肝胆两昆仑~";
	cout << str1 << endl;
	
	//string& operator+=(const char c);	//重载 += 操作符
	string str2 = "C";
	str2 += 'F';
	cout << str2 << endl;
	
	//string& operator+=(const string & str);//重载 += 操作符
	string str3="我自横刀向天笑，";
	str3 += str1;
	cout << str3 << endl;
	
	//string& append(const char* s);//把字符串s连接到当前字符串结尾
	string str4 = "I Love ";
	str4.append("You~");
	cout << str4 << endl;
	
	//string& append(const char* s, int n);//把字符串s的前n个字符连接到当前字符串结尾
	string str5 = "I Love ";
	str5.append("You",1);
	cout << str5 << endl;
	
	//string& append(const string & s);//同operator += (const string & str)
	string str6 = "Dear~";
	str6.append(str4);
	cout << str6 << endl;

	//string& append(const string &s,int  ops,int n);//字符串s中从pos开始的n个字符连接到字符串结尾
	string str7 = "Dear~";
	str7.append(str5, 0, 3);
	cout << str7 << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};