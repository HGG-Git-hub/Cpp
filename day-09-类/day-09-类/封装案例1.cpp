#include"global.h"
class Cude 
{
private:
	double m_L;
	double m_W;
	double m_H;
public:
	//���ó����
	void set_m_L(double l) 
	{
		m_L = l;
	}
	void set_m_W(double w) 
	{
		m_W = w;
	}
	void set_m_H(double h) 
	{
		m_H = h;
	}
	//��ȡ�����
	double get__m_L() 
	{
		return m_L;
	}
	double get__m_W()
	{
		return m_W;
	}
	double get__m_H()
	{
		return m_H;
	}
	//��ȡ���
	double get_area() 
	{
		return (2 * ((m_L * m_W) + (m_L * m_H) + (m_W * m_H)));
	}
	//��ȡ���
	double get_volume() 
	{
		return (m_L * m_W * m_H);
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSame_class(Cude& c) 
	{
		if (m_L=c.get__m_L() && m_W == c.get__m_W() && m_H == c.get__m_H())
		{
			return true;
		}
		return false;
	}
};
//����ȫ�ֺ����жϣ������������Ƿ����
bool isSame(Cude& cu1, Cude& cu2) 
{
	//����������ĳ���߶����
	if (cu1.get__m_L() == cu2.get__m_L() && cu1.get__m_W() == cu2.get__m_W() && cu1.get__m_H() == cu2.get__m_H())
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main() 
{
	//������һ�����������
	Cude cu1;
	cu1.set_m_L(10);
	cu1.set_m_W(10);
	cu1.set_m_H(11);

	cout << cu1.get__m_L() << endl;
	cout << cu1.get__m_W() << endl;
	cout << cu1.get__m_H() << endl;

	cout << cu1.get_area() << endl;

	cout << cu1.get_volume() << endl;
	
	//�����ڶ������������
	Cude cu2;
	cu2.set_m_L(10);
	cu2.set_m_W(10);
	cu2.set_m_H(10);

	//�������������������
	Cude cu3;
	cu3.set_m_L(10);
	cu3.set_m_W(10);
	cu3.set_m_H(10);

	//ȫ�ֺ���
	bool res=isSame(cu1,cu2);
	if (res)
	{
		cout << "���" << endl;	
	}
	else 
	{
		cout << "�����" << endl;
	}

	//��Ա����
	res=cu1.isSame_class(cu2);
	if (res)
	{
		cout << "��Ա�����У����" << endl;
	}
	else
	{
		cout << "��Ա�����У������" << endl;
	}

	system("pause");
	return 0;
};