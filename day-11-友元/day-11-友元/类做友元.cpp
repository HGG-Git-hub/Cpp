#include"global.h"
class Buiding;

class Goodgay //�û���
{
private:
	Buiding *buiding;
public:
	Goodgay();
	
	void visit();
};
class Buiding  //�ҼҵĽ���
{
	friend class Goodgay;
public:
	Buiding();
public:
	string m_living_room;//����
private:
	string m_bed_room;//����
};
Goodgay::Goodgay()
{
	/*new���ڶ���������һ���ռ䣬newʲô�����������ͣ�
	�ͻ᷵��ʲô�����������͵�ָ�룬��Ҫ����ͬ��ָ�����*/
	buiding = new Buiding;
}
void Goodgay::visit()
{
	cout << "�û������ڷ����ҵģ�" << buiding->m_living_room << endl;
	cout << "�û������ڷ����ҵģ�" << buiding->m_bed_room << endl;
}//�ιۺ���������buiding�е�����
Buiding::Buiding()
{
	this->m_living_room = "����";
	this->m_bed_room = "����";
}
void test01()
{
	Goodgay gg;
	gg.visit();
}
int main()
{
	test01();

	system("pause");
	return 0;
};