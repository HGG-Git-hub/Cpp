#include"global.h"
//��ͨʵ��ҳ��

//javaҳ��
class java   
{
public:
	void header() 
	{
		cout << "������������������������(����ͷ��)������������������������������" << endl;
	}
	void booter() 
	{
		cout << "������������������������(�����ײ�)������������������������������" << endl;
	}
	void left() 
	{
		cout << "������������������������(�������)������������������������������" << endl;
	}
	void center() 
	{
		cout << "������������������������(javaչʾ)������������������������������" << endl;
		cout << "������������������������������������������������������" << endl;
	}
};
//pythonҳ��
class Python
{
public:
	void header()
	{
		cout << "������������������������(����ͷ��)������������������������������" << endl;
	}
	void booter()
	{
		cout << "������������������������(�����ײ�)������������������������������" << endl;
	}
	void left()
	{
		cout << "������������������������(�������)������������������������������" << endl;
	}
	void center()
	{
		cout << "������������������������(Pythonչʾ)������������������������������" << endl;
	}
};

//�̳�ʵ��

//һ��ҳ�湫���Ķ���дһ����
class Base_page 
{
public:
	void header()
	{
		cout << "������������������������(����ͷ��)������������������������������" << endl;
	}
	void booter()
	{
		cout << "������������������������(�����ײ�)������������������������������" << endl;
	}
	void left()
	{
		cout << "������������������������(�������)������������������������������" << endl;
	}


};
//javaҳ��
class java:public Base_page
{
public:
	void center()
	{
		cout << "������������������������(javaչʾ)������������������������������" << endl;
		cout << "������������������������������������������������������" << endl;
	}
};
//pythonҳ��
class python :public Base_page
{
public:
	void center()
	{
		cout << "������������������������(pythonչʾ)������������������������������" << endl;
		cout << "������������������������������������������������������" << endl;
	}
};
//c++ҳ��
class CPP :public Base_page
{
public:
	void center()
	{
		cout << "������������������������(CPPչʾ)������������������������������" << endl;
		cout << "������������������������������������������������������" << endl;
	}
};

void test01() 
{
	java ja;
	ja.header();
	ja.booter();
	ja.left();
	ja.center();

}

void test02()
{
	python py;
	py.header();
	py.booter();
	py.left();
	py.center();
}
void test03() 
{
	CPP cpp;
	cpp.header();
	cpp.booter();
	cpp.left();
	cpp.center();
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};