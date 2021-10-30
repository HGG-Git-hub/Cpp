#include"global.h"
class Compare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};
void test01() 
{
	
	set<int, Compare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	s2.insert(50);

	for (set<int, Compare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};