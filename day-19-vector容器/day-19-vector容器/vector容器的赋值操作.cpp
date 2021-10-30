#include"global.h"
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it=v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void test01() 
{
	vector<int>v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}
	printVector(v1);
	
	//vector& operator=(const vector & vec);//���صȺŲ�����
	vector<int>v2;
	v2 = v1;
	printVector(v2);
	
	//assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
	vector<int>v3;
	v3.assign(v1.begin(),v1.end());
	printVector(v3);
	
	//assign(n, elem);//n��elem������ֵ������
	vector<int>v4;
	v4.assign(5,10);
	printVector(v4);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};