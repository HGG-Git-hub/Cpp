#include"global.h"
void print_V(int val)
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int>v2;
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);

	vector<int>v3;
	//���ٿռ�
	//max��ʾ��ȡ������Ƚϴ��һ��
	v3.resize(max(v1.size(),v2.size()));

	//����һ��������
	//����������ǽ�����ɵ�λ��
	cout << "v1��v2�Ĳ��" << endl;
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//���ʱ������λ��д������ɵ�λ��
	for_each(v3.begin(), it, print_V);
	cout << endl;

	//������Ҫ�������������ĵ�����
	cout << "v2��v1�Ĳ��" << endl;
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());

	//���ʱ������λ��д������ɵ�λ��
	for_each(v3.begin(), it, print_V);
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};