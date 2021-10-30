#include"global.h"
void printDeque(deque<int>& D) 
{
	for (deque<int>::iterator it = D.begin(); it != D.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printDeque(d);

	//���˲��������
	//push_back(elem);������β�����һ������
	d.push_back(20);
	printDeque(d);
	
	//push_front(elem);������ͷ������һ������
	d.push_front(20);
	printDeque(d);
	
	//pop_back();ɾ���������һ������
	d.pop_back();
	printDeque(d);
	
	//pop_front();ɾ��������һ������
	d.pop_front();
	printDeque(d);
}
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);
	//ָ��λ�ò�����
	//insert(pos, elem); ��`pos`λ�ò���һ��`elem`Ԫ�صĿ��������������ݵ�λ��
	d1.insert(d1.begin(), 222);
	printDeque(d1);

	//insert(pos, n, elem);��`pos`λ�ò���n��`elem`���ݣ��޷���ֵ
	d1.insert(d1.begin(), 2, 222);
	printDeque(d1);

	//insert(ops, beg, end);��`pos`λ�ò���[beg, end)��������ݣ��޷���ֵ
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
void test03()
{
	deque<int>d3;
	for (int i = 0; i < 10; i++) 
	{
		d3.push_back(i);
	}
	//erase(beg, end); ɾ��[beg, end)��������ݣ�������һ�����ݵ�λ��
	//�����Ҫɾ�����λ�õ����ݣ�����һ���µĵ�����
	deque<int>::iterator it = d3.begin();
	it++;
	d3.erase(it);
	printDeque(d3);
	
	//erase(pos); ɾ��`pos`λ�õ����ݣ�������һ�����ݵ�λ��
	d3.erase(d3.begin());
	printDeque(d3);
	
	//clear();�����������������
	d3.clear();
	//d3.erase(d3.begin(),d3.end());//����Ч��һ��
	printDeque(d3);
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};