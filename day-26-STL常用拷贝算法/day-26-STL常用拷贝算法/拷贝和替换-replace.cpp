#include"global.h"
void print_V(int val) 
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}
	//�滻ǰ��
	for_each(v.begin(),v.end(),print_V);
	cout << endl;

	//�����滻
	replace(v.begin(),v.end(),1,100);

	//�滻��
	for_each(v.begin(), v.end(), print_V);
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};