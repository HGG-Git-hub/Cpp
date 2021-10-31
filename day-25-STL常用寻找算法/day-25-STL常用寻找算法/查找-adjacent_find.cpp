#include"global.h"

void test01() 
{
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(5);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(),v.end());
	if (pos == v.end()) 
	{
		cout << "未找到~" << endl;
	}
	else 
	{
		cout << "找到了~" << endl;
		cout << "相邻的重复元素为：" << *pos << endl;
	}
}
int main() 
{
	test01();
	system("pause");
	return 0;
};