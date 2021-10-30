#include"global.h"
void printSort(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
//��Ԫν��
class MyCompare 
{
public:
	bool operator()(int val1,int val2) 
	{
		return val1 > val2;
	}
};
void test01() 
{
	vector<int>v;

	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);

	sort(v.begin(),v.end());
	printSort(v);

	//Ĭ������ʹ�÷º�����ʹ�����ɽ���
	sort(v.begin(),v.end(), MyCompare());

	printSort(v);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};