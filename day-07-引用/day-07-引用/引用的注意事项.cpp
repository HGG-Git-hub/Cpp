#include"global.h"
int main() 
{
	int a = 10;
	int b = 20;
	//int& c;//���󣬳�ʼ��ʱ����ָ����˭�ı���
	int& c = a;
	
	c = b;	//�ò���Ϊ��ֵ�������������ò���
			//��ֵ���a��c�����20
			//��⣺a��c����ʾһ���ڴ�ռ䣬����b��ֵ����cʱ������������ڴ�ռ�����ݣ�����a��c��ֵ�������仯
			
	//int& c = b;//���������ڳ�ʼ���󣬲����Ըı�

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
	return 0;
}