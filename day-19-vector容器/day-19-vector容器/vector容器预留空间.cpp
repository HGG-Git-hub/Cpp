#include"global.h"

void test01() 
{
	vector<int>v;

	//利用reserve预留空间
	v.reserve(100000);

	int num = 0;//统计开辟内存的次数
	int* p = NULL;//指针指向空
	for (int i = 0; i < 100000; i++) 
	{
		v.push_back(i);
		if (p != &v[0])//如果指针不等于v零号位置的地址
		{
			p = &v[0];//指向首地址(相当于更换了一次内存地址)
			num++;
		}
	}
	cout << "num=:" << num << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};