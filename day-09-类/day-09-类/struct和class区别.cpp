#include"global.h"
class c1 
{
	int c1_a;//��дȨ�ޣ�����Ĭ��Ȩ�޵���˼��classĬ��˽��
};
struct s2 
{
	int c2_a;//structĬ�Ϲ���
};
int main() 
{
	c1 a;
	//a.c1_a;//class��дȨ�ޣ�Ĭ��˽�У��޷���������ʣ����Իᱨ��

	s2 b;
	b.c2_a; //struct��дȨ�ޣ�Ĭ�Ϲ�����������������ʣ����Բ��ᱨ��

	system("pause");
	return 0;
};