#include"global.h"
//������
class Animal 
{
public:
	int m_age;
};
//������̳н�����μ̳д���������
// virtual�ؼ��ּ���ð�ź���
// ���̳еĸ���(Animal)��Ϊ�����
//����
class Sheep : virtual public Animal {};
//����
class Camel : virtual public Animal {};
//�����ࣨ������
class Sheep_Camel : public Sheep, public Camel {};

void test01() 
{
	Sheep_Camel  sc;
	sc.Sheep::m_age = 18;
	sc.Camel::m_age = 28;
	cout << "Sheep:" << sc.Sheep::m_age << endl;
	cout << "Camel:" << sc.Camel::m_age << endl;
	cout << "��̳У�" << sc.m_age << endl;
}

int main() 
{
	test01();

	system("pause");
	return 0;
};