#include"global.h"

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	//������һ�����int�������ݵ���������ָ�����캯����Ĭ�ϱ���������
	//Ĭ�Ϲ���
	vector<int>v1;

	for (int i = 0; i < 10; i++) //��������
	{
		v1.push_back(i);
	}
	printVector(v1);//��ӡ����


	//ͨ�����乹��
	//��v1�Ŀ�ͷ�ͽ�β�������ù���ֱ���ã���ʱv2��v1������һ��
	vector<int>v2(v1.begin(),v1.end());
	printVector(v2);

	//vector(n,elem);//���캯����n��elem����������
	vector<int>v3(5,100);
	printVector(v3);

	//��������
	vector<int>v4(v3);
	printVector(v4);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};