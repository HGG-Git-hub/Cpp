#include"global.h"
//��ͨд��-��������
class Calculator 
{
public:
	int m_num1;//������1
	int m_num2;//������2
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

//��̬����-ʵ�ּ�����������
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
//�ӷ���������
class Add_calculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//������������
class Sub_calculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//�˷���������
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
	//���ڴ�Ķ�������һ���ӷ���������Ŀռ�
	AbstractCalculator* abc = new Add_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	//�������ٵĿռ���Ҫ�ֶ��ͷ�
	if (abc != NULL) 
	{
		delete abc;
		abc = NULL;
	}
	//�ͷ���֮�󣬽�ָ������ָ�������������Ŀռ�
	abc = new Sub_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	//�������ٵĿռ���Ҫ�ֶ��ͷ�
	if (abc != NULL)
	{
		delete abc;
		abc = NULL;
	}
	//�ͷ���֮�󣬽�ָ������ָ��˷���������Ŀռ�
	abc = new Mul_calculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getresult() << endl;
	//�������ٵĿռ���Ҫ�ֶ��ͷ�
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