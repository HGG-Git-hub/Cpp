#include"global.h"
void print111(int val)
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	cout << "��תǰ��" << endl;
	for_each(v1.begin(),v1.end(),print111);

	reverse(v1.begin(),v1.end());

	cout << "��ת��" << endl;
	for_each(v1.begin(),v1.end(),print111); 
}
int main() 
{
	test01();
	system("pause");
	return 0;
};