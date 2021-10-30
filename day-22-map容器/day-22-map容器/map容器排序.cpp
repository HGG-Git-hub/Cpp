#include"global.h"

class Compare 
{
public:
	bool operator()(int v1,int v2)const
	{
		return v1 > v2;
	}
};
void test01() 
{
	map<int, int,Compare>m;

	m.insert(make_pair(4, 40));
	m.insert(make_pair(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(map<int,int>::value_type(3,30));
	
	for (map<int, int, Compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=:" << (*it).first << " value=£º" << (*it).second << endl;
	}
}
int main() 
{
	test01();
	system("pause");
	return 0;
};