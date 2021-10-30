#include"global.h"
void func(int& ref)//发现是引用，转换为//int* const ref=&a;
{
    ref = 100;//ref是引用，转换为*ref=100
    cout << ref << endl;
}
int main()
{
    int a = 10;

    //自动转换为int* const ref=&a;指针常量是指针指向不可以修改，也说明了为什么引用不可以修改
    int& ref = a;
    ref = 20;//内部发现ref是引用自动帮我们转换成：*ref=20

    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    func(a);
    cout << ref << endl;

    system("pause");
    return 0;
}