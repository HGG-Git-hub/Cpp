#include"global.h"
class c1 
{
	int c1_a;//不写权限，就是默认权限的意思，class默认私有
};
struct s2 
{
	int c2_a;//struct默认公共
};
int main() 
{
	c1 a;
	//a.c1_a;//class不写权限，默认私有，无法在类外访问，所以会报错

	s2 b;
	b.c2_a; //struct不写权限，默认公共，可以在类外访问，所以不会报错

	system("pause");
	return 0;
};