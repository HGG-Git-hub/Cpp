#include"global.h"
int * func() 
{	
	//new�ؼ��ֿ��Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǳ����������ջ����ָ�뱣������ݴ���ڶ���
	//ʹ��new�ؼ��ִ����Ķ������ݷ��ص���������ݵĵ�ַ����Ҫ��һ��ָ����գ�����ڽ�����
	int*p=new int(10);
	return p;
}
int main() 
{

	int * q = func();

	cout << *q << endl;
	cout << *q << endl;

	system("pause");
	return 0;
};