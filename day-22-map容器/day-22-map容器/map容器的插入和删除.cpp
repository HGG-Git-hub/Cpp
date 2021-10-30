#include"global.h"
void printMap(map<int, int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout <<"key=:" << (*it).first << " value=��" << (*it).second << endl;
	}
}
void test01() 
{
	map<int, int>m;

	//insert(elem); �������в���Ԫ��
	//��һ��
	m.insert(pair<int, int>(1,10));
	//�ڶ���
	m.insert(make_pair(2, 10));
	//������
	m.insert(map<int, int>::value_type(3, 10));
	//������
	m[4] = 40;
	//���������ʹ�ã����key=5������,���Զ�����һ��key=5��value=0�Ķ���
	//cout << m[5] << endl;
	//һ��ʹ��������ȷ�����ڵĶ���
	cout << m[4] << endl;

	//erase(pos);  ɾ��`pos`��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
	map<int, int>::iterator it = m.begin();
	m.erase(it);
	printMap(m);

	//erase(key); ɾ��������ֵΪ`key`��Ԫ��
	cout << "-----------" << endl;
	m.erase(4);
	printMap(m);

	//erase(beg, end); ɾ������[beg, end)������Ԫ�أ�������һ��Ԫ�صĵ�����
	m.erase(m.begin(),m.end());
	printMap(m);

	//clear(); �������Ԫ��
	m.clear();
	printMap(m);

}
int main() 
{
	test01();
	system("pause");
	return 0;
};