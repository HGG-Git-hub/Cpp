#include"global.h"

void test01() 
{
	string str = "I_Love_You";
	//string& insert(int pos, const char* s); //插入字符串
	str.insert(10,"_DML");
	cout << str << endl;
	//string& insert(int pos, const string & str); //插入字符串
	
	//string& insert(int pos, int n, char c); //在指定位置插入n个字符c
	str.insert(10, 2, 'M');
	cout << str << endl;
	//string& erase(int pos, int n = npos);//删除从pos开始的n个字符
	str.erase(10, 4);
	cout << str << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};