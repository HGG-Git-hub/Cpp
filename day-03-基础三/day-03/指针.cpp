#include"global.h"

void change(int* p, int* p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp;
	
}
//2.����һ������ʵ��ð������
//����1 ������׵�ַ ����2 ����ĳ���
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
int main() 
{
	//1.�ȴ���һ������
	int arr[10] = { 2,0,1,3,5,4,6,7,9,8 };
	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, len);//�������������ĳ���

	//3.��ӡ����������    
	printArray(arr, len);


	//int a = 10;
	////����һ��ָ��
	//int * p;
	////��ָ��p��¼a�ĵ�ַ
	//p = &a;
	//cout <<&a<< endl;
	//cout<<p<<endl;
	////ʹ��ָ��
 //   //����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ��е�����
	//*p = a;

	//cout << *p << endl;

	//����ͨ�������õķ�ʽ���޸�ָ��ָ����ڴ��е�����

	/**p = 100;
	cout << *p <<endl;
	cout << a << endl;

	cout << "ռ���ڴ�ռ䣺" << sizeof(int *) << endl;
	cout << "ռ���ڴ�ռ䣺" << sizeof(char *) << endl;
	cout << "ռ���ڴ�ռ䣺" << sizeof(float *) << endl;
	cout << "ռ���ڴ�ռ䣺" << sizeof(double *) << endl;*/

	////ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	//int* p = NULL;
	////���ʿ�ָ�뱨��
	////�ڴ���0-255Ϊϵͳռ���ڴ棬�������û�����
	//cout << *p << endl;

	/*int* p = (int*)0x1100;

	cout << *p << endl;*/
	/*int a = 10, b = 20;*/
	//const int* p = &a;

	////����ָ��
	//*p = 20;
	//p = &b;
	//cout<<*p << endl;
	
	////ָ�볣��
	//int * const p = &a;
	//*p = 20;
	////p = &b;
	//cout << *p << endl;

	/*const int* const p = &a;
	cout<<*p<<endl;*/


	//int arr[] = {0,1,2,3,4,5,6,7,8,9 };
	//int* p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << endl;
	//	p++;
	//}
	//for (int j = 0; j < 10; j++) 
	//{
	//	cout << arr[j] << endl;
	//}


	//int a = 10, b = 20;
	//cout << a << endl;
	//cout << b << endl;
	//change(&a, &b);//��������
	//cout << a << endl;
	//cout << b << endl;

	system("pause");
	return 0;
}