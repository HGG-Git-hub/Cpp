#include"global.h"

void test01() 
{
	//template<class T > T plus<T>�ӷ��º���
	plus<int>n1;
	cout << n1(40, 50) << endl;
	//template<class T > T minus<T>�����º���
	minus<int>n2;
	cout << n2(40, 50) << endl;
	//template<class T > T multiplies<T>�˷��º���
	multiplies<int>n4;
	cout << n4(40, 50) << endl;
	//template<class T > T divides<T>�����º���
	divides<int>n5;
	cout << n5(50, 50) << endl;
	//template<class T > T modulus<T>ȡģ�º���
	modulus<int>n6;
	cout << n6(40, 50) << endl;
	//template<class T > T negate<T>ȡ���º���
	negate<int>n7;
	cout << n7(50) << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};