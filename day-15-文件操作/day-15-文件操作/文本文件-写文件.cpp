#include"global.h"

void test01() 
{

	//1.����ͷ�ļ�

	//2.����������
	ofstream ofs;
	
	//3.���ļ�
	ofs.open("test.txt",ios::out);
	
	//4.д����
	ofs << "day-15-д�ļ�ɧ����~" << endl;
	
	//5.�ر��ļ�
	ofs.close();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};