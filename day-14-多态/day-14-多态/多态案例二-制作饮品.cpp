#include"global.h"
class abstract_drink 
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//װ��
	virtual void inCup() = 0;
	//�Ӹ���
	virtual void putSomething() = 0;
	//������Ʒ
	void makeDrink() 
	{
		Boil();
		Brew();
		inCup();
		putSomething();
	}
};
//��������
class coffee :public abstract_drink
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	};
	//����
	virtual void Brew()
	{
		cout << "����" << endl;
	};
	//װ��
	virtual void inCup()
	{
		cout << "װ��" << endl;
	};
	//�Ӹ���
	virtual void putSomething()
	{
		cout << "�Ӹ���" << endl;
	};
};
//������ˮ
class tea :public abstract_drink 
{
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	};
	//����
	virtual void Brew()
	{
		cout << "����" << endl;
	};
	//װ��
	virtual void inCup()
	{
		cout << "װ��" << endl;
	};
	//�Ӹ���
	virtual void putSomething()
	{
		cout << "�Ӹ���" << endl;
	};
};

void doWork(abstract_drink *abs) 
{
	abs->makeDrink();
	
	delete abs;
	
}
void test01() 
{
	doWork(new coffee);
	doWork(new tea);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};