#include"global.h"

class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1 + v2;
	}
};
//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01() 
{
	MyAdd My;
	My(10,10);
	cout << My(10, 10) << endl;
}
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
class Print 
{
public:
	int count;//�Լ���״̬�������������
public:
	Print() 
	{
		this->count = 0;
	}
public:
	void operator()(string text) 
	{
		cout << text << endl;
		count++;
	}
};
void test02() 
{
	Print p;
	p("ssss");
	p("ssss");
	p("ssss");
	p("ssss");
	cout << "�����ˣ�" << p.count << "��" << endl;
}
//3.�������������Ϊ��������
void doPrint(Print &p,string text) 
{
	p(text);
}
void test03() 
{
	Print p1;
	doPrint(p1,"hello,C++");
}
int main() 
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
};