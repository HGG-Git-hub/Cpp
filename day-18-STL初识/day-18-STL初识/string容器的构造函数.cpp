#include"global.h"

void test01() 
{
	//string������һ���࣬s1��ʾstring���͵Ķ��󣬹��캯����ϵͳ�ṩ����ΪĬ�Ϲ���
	string s1;

	//ʹ���ַ���s��ʼ��
	const char* str = "hello,word~";
	string s2(str);
	cout << s2 << endl;

	//��������
	string s3(s2);
	cout << s3 << endl;

	//ʹ��n���ַ�c��ʼ��
	string s4(5, 'a');
	cout << s4 << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};