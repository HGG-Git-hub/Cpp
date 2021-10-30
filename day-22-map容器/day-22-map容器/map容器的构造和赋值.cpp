#include"global.h"
void printMap(map<int,int>&m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << "key=" << (*it).first << " " <<"value��" << (*it).second << endl;
	}
}
void test01() 
{
	//����map����
	map<int,int>mp;

	//��������
	//map�����е�Ԫ�ض���(pair������
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 20));
	mp.insert(pair<int, int>(2, 30));

	//�������key��˳���Զ�����
	printMap(mp);

	//��������
	map<int, int>m2(mp);
	cout << "��������m2��" << endl;
	printMap(m2);
	
	//��ֵ
	map<int, int>m3;
	m3 = m2;
	cout << "��ֵ����m3��" << endl;
	printMap(m3);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};