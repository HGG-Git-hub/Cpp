#include"global.h"
//�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
void myprint(int a, int b) 
{
	cout << "��ͨ�����ĵ���~" << endl;
}
template<typename T>
void myprint(T a,T b) 
{
	cout << "���������ĺ���ģ��ĵ���~" << endl;
}
template<typename T>
void myprint(T a, T b,T c)
{
	cout << "���������ĺ���ģ��ĵ���~" << endl;
}
void test01() 
{
	int a = 10, b = 20, c = 30;

	myprint(a, b);
	myprint<>(a, b);//�ÿ�ģ������б���ǿ�Ƶ��ú���ģ��
	myprint<>(a,b,c); //����ģ��Ҳ���Է�������

	char a = 'a';
	char b = 'b';
	myprint(a,b);//����ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
}
int main() 
{
	test01();

	system("pause");
	return 0;
};