#include"global.h"

void test01()
{

	//string& operator=(const char* s);		//char* �����ַ�������ֵ����ǰ���ַ���
	string str1;
	str1 = "hello.word~";
	cout << str1 << endl;

	//string& operator=(const string & s);  //���ַ���s������ǰ���ַ���
	string str2 = "hello.word~";
	string str3 = str2;
	cout << str3 << endl;
	
	//string& operator=(char c);			//�ַ���ֵ����ǰ���ַ���
	string str4;
	str4= 'a';
	cout << str4 << endl;

	//string& assign(const char* s);		//���ַ���s��ֵ����ǰ���ַ���
	string str5;
	str5.assign("hello,C++");
	cout << str5 << endl;
	//string& assign(const char* s, int n); //���ַ�����ǰn���ַ�������ǰ���ַ���
	string str6;
	str6.assign("hello��C++",5);
	cout << str6 << endl;

	//string& assign(const string & s);		//���ַ���s������ǰ�ַ���
	string str7;
	str7.assign(str6);
	cout << str7 << endl;
	//string& assign(int n, char c);		//��n���ַ�c��ֵ����ǰ�ַ���
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