#include"global.h"
class My_print 
{
public:
	void operator()(string test) 
	{
		cout << test << endl;
	}
};
class MyAdd 
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void My_print02(string test) 
{
	cout << test << endl;
}
void test01() 
{
	My_print myprint;

	myprint("hello,C++");//����������������أ��ǳ����ƺ�������

	My_print02("hello,python");//��������
}
void test02() 
{
	MyAdd myadd;

	int res=myadd(100,200);

	cout << res << endl;

	//������������
	cout << MyAdd()(100, 200) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
};