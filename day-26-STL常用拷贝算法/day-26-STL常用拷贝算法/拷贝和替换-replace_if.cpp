#include"global.h"
class print_V 
{
public:
	void operator()(int val) 
	{
		cout << val << " ";
	}
};
class Greate30 
{
public:
	bool operator()(int val) 
	{
		return val >= 30;
	}
};
void test01() 
{
	vector<int>v;
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(60);
	v.push_back(50);
	//�滻ǰ��
	for_each(v.begin(),v.end(),print_V());
	cout << endl;

	//�����ڵ���30�������滻��1000
	replace_if(v.begin(),v.end(), Greate30(),1000);
	
	//�滻��
	for_each(v.begin(), v.end(), print_V());
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};