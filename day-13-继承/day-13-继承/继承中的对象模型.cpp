#include"global.h"
class Base 
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class Son :public Base 
{
public:
	int m_d;
};
/*
��ת�̷� F : (��Ҫ�鿴����Ŀ���ĸ��̾���ת�ĸ���)

��ת�ļ�·����cd(�ո�)����·��(�س�)

���룺dir

cl / d1 reportSingleClassLayout����(�ո�)Դ�ļ����ƣ�tab���Ჹ�룩
*/
void test01() 
{
	cout << "ռ���ڴ��ֽڣ�" << sizeof(Son) << endl;
	//���Ϊ��16������̳и���ĳ�ԱҲ���������һ��4��int���ͣ�4*4=16
	//�����е�˽�г�Ա���Ǳ��������������ˣ�ֻ�Ƿ��ʲ��������Լ̳�
}
int main() 
{
	test01();

	system("pause");
	return 0;
};