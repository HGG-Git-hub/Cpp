#include"global.h"
void print_V(int val) 
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v1;
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);

	cout << "v1:" << endl;
	for_each(v1.begin(),v1.end(),print_V);
	cout << endl;

	vector<int>v2;
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);

	cout << "v2:" << endl;
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;

	swap(v1, v2);

	cout << "v1:" << endl;
	for_each(v1.begin(), v1.end(), print_V);
	cout << endl;

	cout << "v2:" << endl;
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};