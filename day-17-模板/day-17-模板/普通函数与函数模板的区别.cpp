#include"global.h"
//��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
//��ͨ����
int add(int a, int b) 
{
	return a + b;
}
//����ģ��
template<typename T>
T m_add(T a, T b)
{
	return a + b;
}
void test01() 
{
	int a = 10;
	int b = 20;
	char c = 'c';//���ַ�cת�����˶�Ӧ��ASCII��
	cout << add(a,c) << endl;

	//�Զ������Ƶ�
	cout << m_add(a, b) << endl;
	//cout << m_add(a, c) << endl;//�����ԭ���Զ������Ƶ����������ʽת��
	//��ʾָ������
	cout << m_add<int>(a, c) << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};