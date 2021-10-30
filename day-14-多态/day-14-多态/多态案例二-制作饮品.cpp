#include"global.h"
class abstract_drink 
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//装杯
	virtual void inCup() = 0;
	//加辅料
	virtual void putSomething() = 0;
	//制作饮品
	void makeDrink() 
	{
		Boil();
		Brew();
		inCup();
		putSomething();
	}
};
//制作咖啡
class coffee :public abstract_drink
{
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	};
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡" << endl;
	};
	//装杯
	virtual void inCup()
	{
		cout << "装杯" << endl;
	};
	//加辅料
	virtual void putSomething()
	{
		cout << "加辅料" << endl;
	};
};
//制作茶水
class tea :public abstract_drink 
{
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	};
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡" << endl;
	};
	//装杯
	virtual void inCup()
	{
		cout << "装杯" << endl;
	};
	//加辅料
	virtual void putSomething()
	{
		cout << "加辅料" << endl;
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