#include"global.h"
class print_V 
{
public:
	void operator()(int val) 
	{
		cout << val << " ";
	}
};
class Greate30 
{
public:
	bool operator()(int val) 
	{
		return val >= 30;
	}
};
void test01() 
{
	vector<int>v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(60);
	v.push_back(50);
	//替换前：
	for_each(v.begin(),v.end(),print_V());
	cout << endl;

	//将大于等于30的数字替换成1000
	replace_if(v.begin(),v.end(), Greate30(),1000);
	
	//替换后：
	for_each(v.begin(), v.end(), print_V());
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};