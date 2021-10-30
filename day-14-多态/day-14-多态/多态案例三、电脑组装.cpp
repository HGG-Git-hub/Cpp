#include"global.h"
//抽象CPU类
class CPU 
{
public:
	//纯虚函数（提供计算功能）
	virtual void caculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//纯虚函数（提供显示功能）
	virtual void dispiay() = 0;
};
//抽象内存类
class Memory
{
public:
	//纯虚函数（提供存储功能）
	virtual void storage() = 0;
};

//电脑类
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
	CPU* m_cpu;//cpu指针
	VideoCard* m_vi;//显卡指针
	Memory* m_me;//内存指针
public:
	//电脑工作的函数
	void doWork() 
	{
		//调用接口，让零件工作
		m_cpu->caculate();
		m_vi->dispiay();
		m_me->storage();
	}
	//提供一个析构函数释放零件
	~computer() 
	{	//释放cpu指针
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡指针
		if (m_vi != NULL)
		{
			delete m_vi;
			m_vi = NULL;
		}
		//释放内存指针
		if (m_me != NULL)
		{
			delete m_me;
			m_me = NULL;
		}
	}
};
//具体的厂商Inter
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
//具体的厂商Lenovo
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
	//第一台电脑
	
	//在堆区开辟第一台电脑的零件
	CPU* InterCPU1 = new InterCPU;
	VideoCard* InterVideoCard1 = new InterVideoCard;
	Memory* InterMemory1 = new InterMemory;
	//将零件传入电脑中
	computer* computer1 = new computer(InterCPU1, InterVideoCard1, InterMemory1);
	cout << "第一台电脑开始工作了" << endl;
	computer1->doWork();

	delete computer1;

	//第二台电脑
	computer* computer2 = new computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	cout << "第二台电脑开始工作了" << endl;
	computer2->doWork();

	delete computer2;

	//第三台电脑
	computer* computer3 = new computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	cout << "第三台电脑开始工作了" << endl;
	computer3->doWork();

	delete computer3;
}

int main() 
{
	test01();
	system("pause");
	return 0;
};