#include<iostream>
#include<string>
#include<fstream>
#include<ctime>	
#include<algorithm>
#include<vector>
using namespace std;

void test01() 
{
	//大容器中嵌套的小容器
	vector<vector<int>>V;

	//小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//给小容器中插入不同的数据
	for (int i = 0; i < 4; i++) 
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	//将小容器放到大容器中
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);

	//通过大容器把小容器中的数据遍历
	for (vector<vector<int>>::iterator V_it = V.begin(); V_it != V.end(); V_it++) 
	{
		//V_it本质是一个指针，（*V_it）是将指针解引用，看vector<int>,表示V_it的类型，这里的(*V_it)表示小容器

		//for循环的意思，小容器的指针it指向了小容器的首地址，首地址不等于尾地址，遍历并且指针++
		for (vector<int>::iterator it = (*V_it).begin(); it != (*V_it).end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
int main() 
{
	test01();

	system("pause");
	return 0;
};