#include"global.h"


	//template<class T > bool equal_to<T>����
	
	//template<class T > bool not_equal_to<T>������
	
	//template<class T > bool greater<T>����
	
	//template<class T > bool greater_equal<T>���ڵ���
	
	//template<class T > bool less<T>С��
	
	//template<class T > bool less_equal<T>С�ڵ���

void printVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
class Compare 
{
public:
	bool operator()(int v1,int v2) 
	{
		return v1 > v2;
	}
};
void test02() 
{
	vector<int>v;

	v.push_back(10);
	v.push_back(60);
	v.push_back(80);
	v.push_back(40);
	v.push_back(50);
	printVector(v);

	//����
	sort(v.begin(),v.end(),Compare());
	printVector(v);

	sort(v.begin(),v.end(),greater<int>());
	printVector(v);

	//����
	sort(v.begin(),v.end(),less<int>());
	printVector(v);
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};