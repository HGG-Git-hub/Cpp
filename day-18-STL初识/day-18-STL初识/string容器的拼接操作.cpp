#include"global.h"
void test01()
{

	//string& operator+=(const char* str);//���� += ������
	string str1 = "ȥ";
	str1 += "���ε�������~";
	cout << str1 << endl;
	
	//string& operator+=(const char c);	//���� += ������
	string str2 = "C";
	str2 += 'F';
	cout << str2 << endl;
	
	//string& operator+=(const string & str);//���� += ������
	string str3="���Ժᵶ����Ц��";
	str3 += str1;
	cout << str3 << endl;
	
	//string& append(const char* s);//���ַ���s���ӵ���ǰ�ַ�����β
	string str4 = "I Love ";
	str4.append("You~");
	cout << str4 << endl;
	
	//string& append(const char* s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	string str5 = "I Love ";
	str5.append("You",1);
	cout << str5 << endl;
	
	//string& append(const string & s);//ͬoperator += (const string & str)
	string str6 = "Dear~";
	str6.append(str4);
	cout << str6 << endl;

	//string& append(const string &s,int  ops,int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
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