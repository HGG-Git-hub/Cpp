#include"global.h"
void printVector(vector<bool>& v) 
{
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(false);
	printVector(v);

	vector<bool>v1;
	//重新指定v1容器的大小，和v一样大
	v1.resize(v.size());

	//template<class > bool logical_not<T>逻辑非
	transform(v.begin(),v.end(),v1.begin(), logical_not<bool>());
	
	printVector(v1);

}
int main() 
{
	test01();
	system("pause");
	return 0;
};