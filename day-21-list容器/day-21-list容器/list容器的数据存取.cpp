#include"global.h"

void test01() 
{
	list<int>L;

	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	
	//front();���ص�һ��Ԫ��
	cout << L.front() << endl;
	//back();�������һ��Ԫ��
	cout << L.back() << endl;

	//��֤��������֧���������
	list<int>::iterator it = L.begin();
	//֧��++��--
	it++;
	it--;
	//��֧��+1��+2��+3���������
	//it = it + 1;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};