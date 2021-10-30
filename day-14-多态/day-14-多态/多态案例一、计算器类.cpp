#include"global.h"
//普通写法-计算器类
class Calculator 
{
public:
	int m_num1;//操作数1
	int m_num2;//操作数2
public:
	int get_result(string opr) 
	{
		if (opr == "+") 
		{
			return m_num1 + m_num2;
		}
		else if (opr == "-")
		{
			return m_num1 - m_num2;
		}
		else if (opr == "*")
		{
			return m_num1 * m_num2;
		}
	}
};
void test01() 
{
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.get_result("+") << endl;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.get_result("-") << endl;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.get_result("*") << endl;
}

//多态技术-实现计算器抽象类
class AbstractCalculator
{
public:
	int m_num1, m_num2;
public:
	virtual int getresult()
	{
		return 0;
	};
};
//加法计算器类
class Add_calculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//减法计算器类
class Sub_calculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//乘法计算器类
class Mul_calculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 * m_num2;
	}
};
void test02() 
{
	//在内存的堆区开辟一个加法计算器类的空间
	AbstractCalculator* abc = new Add_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	//堆区开辟的空间需要手动释放
	if (abc != NULL) 
	{
		delete abc;
		abc = NULL;
	}
	//释放完之后，将指针重新指向减法计算器类的空间
	abc = new Sub_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	//堆区开辟的空间需要手动释放
	if (abc != NULL)
	{
		delete abc;
		abc = NULL;
	}
	//释放完之后，将指针重新指向乘法计算器类的空间
	abc = new Mul_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getresult() << endl;
	//堆区开辟的空间需要手动释放
	if (abc != NULL)
	{
		delete abc;
		abc = NULL;
	}
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};