#include"global.h"
class My_home
{
	//ȫ�ֺ���Ҫ����������˽�����ԣ���Ҫ������Ԫ����
	friend void Good_gay(My_home& p1);

public:
	My_home()//���캯�������ã�����ֵ
	{
		m_living_room = "����";
		m_bed_room = "����";
	}
public:
	string m_living_room;//����
private:
	string m_bed_room;//����

};
//ȫ�ֺ���
void Good_gay(My_home &p1) //�˴�ֵ���ݣ���ַ���ݣ����ô��ݶ����ԣ�����ֵ����Ч�ʱȽϵ�
{
	cout <<"�û������ڷ��ʣ�"<< p1.m_living_room << endl;
	cout << "�û������ڷ��ʣ�" << p1.m_bed_room << endl;
}
void test() 
{
	My_home p1;//My_home���͵�p1

	Good_gay(p1);//�������ã�����ֵ
}
int main() 
{
	test();

	system("pause");
	return 0;
};