#include"global.h"
//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ�=2*PI*�뾶
const double PI = 3.14;
class Circle //��Ĵ���
{
	//Ȩ��
	public://����Ȩ��

	//����
	int m_r;//Բ��İ뾶

	//��Ϊ,һ���Ǻ���
	double calculate_girth()
	{
		return 2 * PI * m_r;
	};
};
int main() 
{
	Circle c1;//���ж���Ĵ���

	c1.m_r = 10;//��Բ�еİ뾶��ֵ

	double a = c1.calculate_girth();
	
	cout<<"Բ���ܳ���" << c1.calculate_girth() << endl;
	cout << "Բ���ܳ���" << a << endl;

	system("pause");
	return 0;
};