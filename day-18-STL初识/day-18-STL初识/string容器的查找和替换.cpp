#include"global.h"
//����
void test01()
{
	string str = "Dear,I miss you,I am so sad,I love you DML";

	//int find(const string& str, int pos = 0)const;//����str��һ�γ��ֵ�λ�ã���pos��ʼ����
	int pos=str.find("DML");
	if (pos == -1) 
	{
		cout << "δ�ҵ�~" << endl;
	}
	else 
	{
		cout << pos << endl;
	}

	//find��rfind������
	
	//rfind�Ǵ�������飬find�Ǵ������Ҳ�
	//�����±������Ǵ���������
	//int rfind(const string & str, int pos = npos)const;//����str���һ�ε�λ�ã���pos��ʼ����
	pos = str.rfind("DML");
	cout << pos << endl;
}
//�滻
void test02() 
{
	string str = "Dear,I miss you,I am so sad,I love you DML";

	//string& replace(int pos, int n, const string & str);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���str
	str.replace(39, 3, "ZXY");
	
	cout << str << endl;
}
int main() 
{
	test01();

	test02();

	system("pause");
	return 0;
};