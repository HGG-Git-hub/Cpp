#include"global.h"

void test01()
{
	
	string str = "hello~";
	cout << str << endl;

	//char& operator[](int n); // ͨ��[]��ʽ��ȡ�����ַ�
	for (int i = 0; i < str.size(); i++) 
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//char& at(int n); // ͨ��at������ȡ�ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';

	str.at(1) = 'w';

	cout << str << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};