#include"global.h"
//����CPU��
class CPU 
{
public:
	//���麯�����ṩ���㹦�ܣ�
	virtual void caculate() = 0;
};
//�����Կ���
class VideoCard
{
public:
	//���麯�����ṩ��ʾ���ܣ�
	virtual void dispiay() = 0;
};
//�����ڴ���
class Memory
{
public:
	//���麯�����ṩ�洢���ܣ�
	virtual void storage() = 0;
};

//������
class computer 
{
public:
	computer(CPU* cpu, VideoCard* vi, Memory* me) 
	{
		m_cpu = cpu;
		m_vi = vi;
		m_me = me;
	}
private:
	CPU* m_cpu;//cpuָ��
	VideoCard* m_vi;//�Կ�ָ��
	Memory* m_me;//�ڴ�ָ��
public:
	//���Թ����ĺ���
	void doWork() 
	{
		//���ýӿڣ����������
		m_cpu->caculate();
		m_vi->dispiay();
		m_me->storage();
	}
	//�ṩһ�����������ͷ����
	~computer() 
	{	//�ͷ�cpuָ��
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ�ָ��
		if (m_vi != NULL)
		{
			delete m_vi;
			m_vi = NULL;
		}
		//�ͷ��ڴ�ָ��
		if (m_me != NULL)
		{
			delete m_me;
			m_me = NULL;
		}
	}
};
//����ĳ���Inter
class InterCPU :public CPU
{
public:
	virtual void caculate() 
	{
		cout << "Inter de CPU" << endl;
	};
};
class InterVideoCard :public VideoCard
{
public:
	virtual void dispiay()
	{
		cout << "Inter de VideoCard" << endl;
	};
}; 
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter de Memory" << endl;
	};
};
//����ĳ���Lenovo
class LenovoCPU :public CPU
{
public:
	virtual void caculate()
	{
		cout << "Lenovo de CPU" << endl;
	};
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void dispiay()
	{
		cout << "Lenovo de VideoCard" << endl;
	};
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo de Memory" << endl;
	};
};
void test01() 
{
	//��һ̨����
	
	//�ڶ������ٵ�һ̨���Ե����
	CPU* InterCPU1 = new InterCPU;
	VideoCard* InterVideoCard1 = new InterVideoCard;
	Memory* InterMemory1 = new InterMemory;
	//��������������
	computer* computer1 = new computer(InterCPU1, InterVideoCard1, InterMemory1);
	cout << "��һ̨���Կ�ʼ������" << endl;
	computer1->doWork();

	delete computer1;

	//�ڶ�̨����
	computer* computer2 = new computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	computer2->doWork();

	delete computer2;

	//����̨����
	computer* computer3 = new computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	cout << "����̨���Կ�ʼ������" << endl;
	computer3->doWork();

	delete computer3;
}

int main() 
{
	test01();
	system("pause");
	return 0;
};