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

	//���accumulate�ĵ�����������Ϊ0�������͵Ľ���ü��ϵ���������
	//���Ϊ15
	int num = accumulate(v.begin(), v.end(), 0);
	cout << num << endl;
	//���Ϊ16
	num = accumulate(v.begin(), v.end(), 1);
	cout << num << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};