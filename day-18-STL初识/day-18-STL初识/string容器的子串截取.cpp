#include"global.h"

void test01() 
{
	//string substr(int pos = 0, int n = npos)const;//������pos��ʼ��n���ַ���ɵ��ַ���
	string str = "I_Love_You_DML";

	string s = str.substr(2, 4);

	cout << s << endl;
}
//ʵ�ò���-��ȡ������û���
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