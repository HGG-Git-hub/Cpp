#include"global.h"
void func(int a, int) //ռλ����
{
	cout << "I love you" << endl;
}
void func1(int a, int = 10) //չλ����������Ĭ�ϲ���
{
	cout << "I love you too" << endl;
}

int main() 
{
	func(10,10);

	func1(10);

	system("pause");
	return 0;
};