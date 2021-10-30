#include"global.h"

void test01() 
{
	list<int>L;

	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	
	//front();返回第一个元素
	cout << L.front() << endl;
	//back();返回最后一个元素
	cout << L.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = L.begin();
	//支持++，--
	it++;
	it--;
	//不支持+1，+2，+3等随机访问
	//it = it + 1;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};