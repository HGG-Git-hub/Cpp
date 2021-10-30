#include"global.h"

void test01() 
{
	//pair<type, type > p(value1, value2); 
	pair<string, int> p("Tom",10);
	cout << p.first << " " << p.second << endl;
	
	//pair<type, type > p = make_pair(value1, value2); 
	pair<string, int> q=make_pair("Jak", 20);
	cout << q.first << " " << q.second << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};