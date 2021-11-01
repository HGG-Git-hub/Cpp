#include"global.h"
void myprint(int val) 
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i <= 5; i++) 
	{
		v.push_back(i);
	}
	//for_each(v.begin(),v.end(),myprint);
	//cout << endl;

	//如果accumulate的第三个参数不为0，最后求和的结果得加上第三个参数
	//结果为15
	int num = accumulate(v.begin(), v.end(), 0);
	cout << num << endl;
	//结果为16
	num = accumulate(v.begin(), v.end(), 1);
	cout << num << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};