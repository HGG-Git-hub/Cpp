#include"global.h"
int main() 
{
	int a = 10;

	int &b = a; //��������

	cout << a << endl; //���10
	cout << b << endl; //���10

	b = 100;

	cout << a << endl; //���100
	cout << b << endl; //���100
	
	system("pause");
	return 0;
};