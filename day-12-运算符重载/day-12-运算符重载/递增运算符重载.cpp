#include"global.h"
class my_integer 
{
	friend ostream& operator<<(ostream& cout, my_integer m_int);
private:
	int m_num;
public:
	my_integer() 
	{
		m_num = 0;
	}
	//����    ǰ��++    �����
	

	//����������Ϊ�˶�һ�����ݽ��в���
	my_integer& operator++()
	{
		//�Ƚ���++����
		m_num++;
		//�ڽ�������ķ��أ�thisָ��ָ������*this�����ã����ص�������my_integer
		return *this;
	}
	//����     ����++    �����
	
	//void operator++(int),int��ʾռλ������������ǰ�úͺ��õ���
	my_integer  operator++(int) 
	{
		//�ȼ�¼��ǰ��ֵ
		my_integer temp = *this;
		//�ٽ���ǰ��ֵ++
		m_num++;
		//���ؼ�¼��ֵ
		return temp;
	}
};
ostream& operator<<(ostream& cout, my_integer m_int) 
{
	cout << m_int.m_num;
	return cout;
}
void test01() 
{
	my_integer m_int;//�Զ�������е�����Ԫ��
	cout << ++m_int << endl;
}
void test02() 
{
	my_integer m_int;
	cout << m_int++ << endl;
	cout << m_int << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};