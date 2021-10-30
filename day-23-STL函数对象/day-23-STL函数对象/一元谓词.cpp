#include"global.h"


class GreateFive
{
public:
	bool operator()(int val) 
	{
		if (val > 5) 
		{
			return true;
		}
		else 
		{
			return false;
		}
		//if{}else{}等价于 return val > 5;
	}
};
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}
	
	//查找容器中有没有大于5的数
	//GreateFive()匿名对象，如果不定义具体的类的对象，可以使用匿名对象
	//GreateFive g;具体的类的对象
	//find_if() 是内置算法，用来查找，有3个参数，返回的类型是迭代器

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
	if (it == v.end()) 
	{
		cout << "无" << endl;
	}
	else 
	{
		cout << "有" << endl;
		for (; it != v.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
int main() 
{
	test01();
	system("pause");
	return 0;
};