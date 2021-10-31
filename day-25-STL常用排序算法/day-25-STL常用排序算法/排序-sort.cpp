#include"global.h"

void PrintVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool FFF(int q1,int q2) 
{
	return q1 > q2;
}
class fff 
{
public:
	bool operator()(int q1,int q2) 
	{
		return q1 > q2;
	}
};
void myPrint(int val) 
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v;
	v.push_back(30);
	v.push_back(20);
	v.push_back(55);
	v.push_back(30);
	v.push_back(10);

	//ÉýÐò
	sort(v.begin(), v.end());
	for_each(v.begin(),v.end(),myPrint);
	cout << endl;

	//½µÐò-ÆÕÍ¨º¯Êý
	sort(v.begin(),v.end(),FFF);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	//½µÐò-·Âº¯Êý
	sort(v.begin(), v.end(), fff());
	PrintVector(v);
	//½µÐò-ÄÚ½¨º¯Êý-greater
	sort(v.begin(), v.end(), greater<int>());
	PrintVector(v);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};