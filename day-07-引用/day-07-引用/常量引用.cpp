#include"global.h"
//��ӡ���ݵĺ���(ֻ��ӡ)
void showValue(const int& val) 
{
	//val += 100;//const��������ʱ���޷��޸����õ�ֵ���ᱨ��
	cout << "val=" << val << endl;
}
int main() 
{

	//int a = 10;
	//int& ref = a;
	////int& ref = 10;//���Ϸ���������Ҫ����һ��Ϸ����ڴ�ռ�(���ڴ���)

	//const int& ref = 10;//�Ϸ�������Ϊ�������������޸�
	////�޸ĳ��ˣ�int temp = 10; int& ref = temp; (ע�����ڲ��޸�)
	//ref = 20;//const����ʱ��Ϊֻ��״̬�����޸�
	
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
};