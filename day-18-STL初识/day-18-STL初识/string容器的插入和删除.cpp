#include"global.h"

void test01() 
{
	string str = "I_Love_You";
	//string& insert(int pos, const char* s); //�����ַ���
	str.insert(10,"_DML");
	cout << str << endl;
	//string& insert(int pos, const string & str); //�����ַ���
	
	//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
	str.insert(10, 2, 'M');
	cout << str << endl;
	//string& erase(int pos, int n = npos);//ɾ����pos��ʼ��n���ַ�
	str.erase(10, 4);
	cout << str << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};