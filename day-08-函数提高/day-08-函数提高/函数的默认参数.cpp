#include"global.h"
int func01(int a = 10, int b = 20, int c = 30) 
{
	return a + b + c;
}
int func02(int a = 10, int b = 10);//����������
int func02(int a, int b)
{
	return a + b;
}
//ע������:
//1.ĳ���β���Ĭ�ϲ�������ô�����λ�����󶼵���Ĭ�ϲ���(��������)
//2.�����������ͺ����Ķ���ֻ����һ����Ĭ�ϲ���
int main() 
{
	cout << func01()<<endl;
	cout << func01(1,1,1) << endl; //������Ǹ����������ݣ����д���ģ����û���룬����Ĭ�ϵ�
	cout << func02() << endl;

	system("pause");
	return 0;
};
