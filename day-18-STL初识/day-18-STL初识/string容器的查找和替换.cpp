#include"global.h"
//查找
void test01()
{
	string str = "Dear,I miss you,I am so sad,I love you DML";

	//int find(const string& str, int pos = 0)const;//查找str第一次出现的位置，从pos开始查找
	int pos=str.find("DML");
	if (pos == -1) 
	{
		cout << "未找到~" << endl;
	}
	else 
	{
		cout << pos << endl;
	}

	//find和rfind的区别
	
	//rfind是从右往左查，find是从左往右查
	//但是下标依旧是从做往右数
	//int rfind(const string & str, int pos = npos)const;//查找str最后一次的位置，从pos开始查找
	pos = str.rfind("DML");
	cout << pos << endl;
}
//替换
void test02() 
{
	string str = "Dear,I miss you,I am so sad,I love you DML";

	//string& replace(int pos, int n, const string & str);//替换从pos开始的n个字符为字符串str
	str.replace(39, 3, "ZXY");
	
	cout << str << endl;
}
int main() 
{
	test01();

	test02();

	system("pause");
	return 0;
};