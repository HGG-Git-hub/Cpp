#include"global.h"
//ÆÕÍ¨ÊµÏÖÒ³Ãæ

//javaÒ³Ãæ
class java   
{
public:
	void header() 
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²Í·²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void booter() 
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²µ×²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void left() 
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²×ó²à)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void center() 
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(javaÕ¹Ê¾)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
};
//pythonÒ³Ãæ
class Python
{
public:
	void header()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²Í·²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void booter()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²µ×²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void left()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²×ó²à)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void center()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(PythonÕ¹Ê¾)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
};

//¼Ì³ÐÊµÏÖ

//Ò»¸öÒ³Ãæ¹«¹²µÄ¶«Î÷Ð´Ò»¸öÀà
class Base_page 
{
public:
	void header()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²Í·²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void booter()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²µ×²¿)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
	void left()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(¹«¹²×ó²à)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}


};
//javaÒ³Ãæ
class java:public Base_page
{
public:
	void center()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(javaÕ¹Ê¾)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
};
//pythonÒ³Ãæ
class python :public Base_page
{
public:
	void center()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(pythonÕ¹Ê¾)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
	}
};
//c++Ò³Ãæ
class CPP :public Base_page
{
public:
	void center()
	{
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤(CPPÕ¹Ê¾)¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
		cout << "¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤¡¤" << endl;
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