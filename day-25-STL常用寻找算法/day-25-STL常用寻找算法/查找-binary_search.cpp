#include"global.h"

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}
	bool b = binary_search(v.begin(),v.end(),200);
	if (b == true) 
	{
		cout << "�ҵ���~" << endl;
	}
	else 
	{
		cout << "δ�ҵ�~" << endl;
	}
}
int main() 
{
	test01();

	system("pause");
	return 0;
};