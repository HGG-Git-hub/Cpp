#include<iostream>
#include<string>
#include<fstream>
#include<ctime>	
#include<algorithm>
#include<vector>
using namespace std;

void test01() 
{
	//��������Ƕ�׵�С����
	vector<vector<int>>V;

	//С����
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//��С�����в��벻ͬ������
	for (int i = 0; i < 4; i++) 
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	//��С�����ŵ���������
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);

	//ͨ����������С�����е����ݱ���
	for (vector<vector<int>>::iterator V_it = V.begin(); V_it != V.end(); V_it++) 
	{
		//V_it������һ��ָ�룬��*V_it���ǽ�ָ������ã���vector<int>,��ʾV_it�����ͣ������(*V_it)��ʾС����

		//forѭ������˼��С������ָ��itָ����С�������׵�ַ���׵�ַ������β��ַ����������ָ��++
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