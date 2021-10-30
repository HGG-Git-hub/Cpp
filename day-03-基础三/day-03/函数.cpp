#include"global.h"
int max(int a, int b) 
{
	return a > b ? a : b;
}
int main() 
{

    int a = 10, b = 30;
    cout << max(a, b) << endl;

	system("pause");
	return 0;
}
