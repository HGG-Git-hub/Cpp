#include"global.h"
void print_V(int val) 
{
	cout << val << " ";
}
void  test01() 
{
	vector<int>v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}
	//�����һ�������е�����
	for_each(v1.begin(),v1.end(),print_V);
	cout << endl;

	//׼���ڶ�����������ָ����С
	vector<int>v2;
	v2.resize(v1.size());

	//���п���
	copy(v1.begin(), v1.end(), v2.begin());
	
	//�����e���������е�����
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;

	//��ֵ��ͬ�ڿ���
	v2 = v1;
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};