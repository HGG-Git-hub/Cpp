#include"global.h"
void test01() 
{
	//int compare(const string & s)const;// Óë×Ö·û´®s±È½Ï
	string str1 = "asdf";
	string str2 = "asdf";
	string str3 = "qwer";

	int a = str1.compare(str2);
	cout << a << endl;
	int b = str1.compare(str3);
	cout << b << endl;
	int c = str3.compare(str1);
	cout << c << endl;
}

int main() 
{
	test01();

	system("pause");
	return 0;
};