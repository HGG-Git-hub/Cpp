#include"global.h"
class myprint 
{
public:
	void operator()(int val) 
	{
		cout << val<<" ";
	}
};
void test01() 
{
	vector<int>v;
	v.resize(10);
	
	fill(v.begin(), v.end(), 10);
	
	for_each(v.begin(),v.end(),myprint());
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};