#include"global.h"

void printMap(map<int, int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << "key=:" << (*it).first << " value=��" << (*it).second << endl;
	}
}
void test01() 
{
	map<int, int>m;

	m.insert(make_pair(1,10));
	m.insert(pair<int, int>(2,20));

	printMap(m);

	//find(key); ����`key`�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����`set.end(); `
	map<int, int>::iterator pos = m.find(1);
	if (pos != m.end()) 
	{
		cout << "�ҵ���~" << endl;
		cout << "key=:" << (*pos).first << " value=��" << (*pos).second << endl;
	}
	else 
	{
		cout << "û�ҵ�~" << endl;
	}

	//count(key); ͳ��`key`��Ԫ�ظ���
	//map�����е�key�������ظ������Բ鵽��key������Ҫô��1Ҫô��0
	cout << "����Ϊ��" << m.count(1) << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};