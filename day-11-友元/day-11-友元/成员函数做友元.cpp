#include"global.h"
//��Ա��������Ԫ
class Building;
class Goodgay
{
public:
	Goodgay();//���캯������

	Building* b; //Building���͵�ָ��

	void visit1();//���Է���Building�е�˽�����ԣ���Ԫ��

	void visit2();//�޷�����Building�е�˽������
};
class Building 
{
	//��Ա��������Ԫ������
	//��Ҫ�ڱ����ʵ���������friend
	//����Ҫ�ڱ����ʵ������������ĸ���ĳ�Ա����(Goodgay::visit();)Goodday��ĳ�Ա����visit()����
	friend void Goodgay::visit1();
public:
	Building();//���캯������
public:
	string m_living_room;//����
private:
	string m_bed_room;//����
};
Goodgay::Goodgay() 
{
	b = new Building;
}
void Goodgay:: visit1()
{
	cout << "���ԣ�visit1���ڷ��ʣ�" << b->m_living_room << endl;
	cout << "���ԣ�visit1���ڷ��ʣ�" <<b->m_bed_room << endl;
}

void Goodgay:: visit2() 
{
	cout << "���ԣ�visit2���ڷ��ʣ�" << b->m_living_room << endl;
}

Building::Building() 
{
	m_living_room = "����";
	m_bed_room = "����";
}

void test01() 
{
	Goodgay gg;
	gg.visit1();
	gg.visit2();

}

int main() 
{
	test01();
	
	system("pause");
	return 0;
};
