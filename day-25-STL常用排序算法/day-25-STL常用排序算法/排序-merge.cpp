#include"global.h"
void print11(int val) 
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 5; i++) 
	{
		v1.push_back(i);
		v2.push_back(i+1);
	}
	cout << "第一个容器：" << endl;
	for_each(v1.begin(), v1.end(), print11);
	cout << endl;
	
	cout << "第二个容器：" << endl;
	for_each(v2.begin(), v2.end(), print11);
	cout << endl;

	//目标容器
	vector<int>v;
	v.resize(2*v1.size());
	
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	
	cout << "目标容器：" << endl;
	for_each(v.begin(),v.end(), print11);
	cout << endl;

	vector<int>v3;
	for (int i = 0; i < 5; i++)
	{
		v3.push_back(i);
	}
	cout << "第三个容器：" << endl;
	for_each(v3.begin(), v3.end(), print11);
	cout << endl;


	vector<int>v4;
	for (int j = 5; j < 10; j++)
	{
		v4.push_back(j);
	}
	cout << "第四个容器：" << endl;
	for_each(v4.begin(), v4.end(), print11);
	cout << endl;

	vector<int>vv;
	vv.resize(v3.size()+v4.size());
	merge(v3.begin(), v3.end(), v4.begin(), v4.end(), vv.begin());	
	cout << "目标容器：" << endl;
	for_each(vv.begin(), vv.end(), print11);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};