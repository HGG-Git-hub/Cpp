#include"global.h"
void func(int& ref)//���������ã�ת��Ϊ//int* const ref=&a;
{
    ref = 100;//ref�����ã�ת��Ϊ*ref=100
    cout << ref << endl;
}
int main()
{
    int a = 10;

    //�Զ�ת��Ϊint* const ref=&a;ָ�볣����ָ��ָ�򲻿����޸ģ�Ҳ˵����Ϊʲô���ò������޸�
    int& ref = a;
    ref = 20;//�ڲ�����ref�������Զ�������ת���ɣ�*ref=20

    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    func(a);
    cout << ref << endl;

    system("pause");
    return 0;
}