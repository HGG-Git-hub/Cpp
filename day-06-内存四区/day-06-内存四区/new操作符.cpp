#include"global.h"
//new�Ļ����﷨
int* func() 
{
	//�ڶ�������һ������
	int * p=new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;//�ͷŸõ�ַ���ڴ�

	cout << *p << endl;//�ͷź��ٴ����лᱨ��û��Ȩ�޷��ʸ��ڴ��ˣ��Ѿ����ͷ���
}
//�ڶ�������һ������
void test02() 
{
	int * arr =new int [10];//[10]��ʾ���Դ��10��Ԫ�ص����飬���ص��������׵�ַ
	for (int i = 0; i < 10; i++) //��ֵ
	{
		arr[i] = i + 100;
	}
	for (int j = 0; j < 10; j++) //���
	{
		cout << arr[j] << endl;
	}
	//�ͷ����飬��Ҫ��һ��[],��˼�Ǹ��߱������ͷŵ�Ϊ����
	delete []arr;

}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};