#include"global.h"

void test01()
{

	//string& operator=(const char* s);		//char* 类型字符串，赋值给当前的字符串
	string str1;
	str1 = "hello.word~";
	cout << str1 << endl;

	//string& operator=(const string & s);  //把字符串s赋给当前的字符串
	string str2 = "hello.word~";
	string str3 = str2;
	cout << str3 << endl;
	
	//string& operator=(char c);			//字符赋值给当前的字符串
	string str4;
	str4= 'a';
	cout << str4 << endl;

	//string& assign(const char* s);		//把字符串s赋值给当前的字符串
	string str5;
	str5.assign("hello,C++");
	cout << str5 << endl;
	//string& assign(const char* s, int n); //把字符串的前n个字符赋给当前的字符串
	string str6;
	str6.assign("hello，C++",5);
	cout << str6 << endl;

	//string& assign(const string & s);		//把字符串s赋给当前字符串
	string str7;
	str7.assign(str6);
	cout << str7 << endl;
	//string& assign(int n, char c);		//用n个字符c赋值给当前字符串
	string str8;
	str8.assign(8,'a');
	cout << str8 << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};