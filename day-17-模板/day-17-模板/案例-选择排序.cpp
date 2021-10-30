#include"global.h"
//����ģ��
template<typename T>
void Sort(T &a,T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}
//����ģ��
template<typename T>
void mySort(T Array,int len) 
{
	for (int i = 0; i < len; i++) 
	{
		int max = i;//���϶����ֵ�ǵ�һ��
		for (int j = i + 1; j < len; j++) 
		{
			if (Array[max] < Array[j]) 
			{
				max = j;
			}
		}
		if (max != i) 
		{
			//����max��i�±��Ԫ��
			Sort(Array[max],Array[i]);
		}
	}
}
//��ӡ����ģ��
template<typename T>
/*дint��дT��ԭ��:
	���дT��
		�������Ƶ�array��char�ͣ�len��int�ͣ���һ�£��ᱨ��
		����Լ�д����������ͣ��������Ͳ����Լ��Ƶ�������ֱ����*/
void printArray(T array[], int len)
{
	for (int i = 0; i < len; i++) 
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
void test01() //����char����
{
	char Array[] = "acbedf";//����
	int num = sizeof(Array) / sizeof(char);//���鳤��

	mySort(Array, num);//��������ģ��

	printArray(Array,num);//���ô�ӡģ��
}
void test02() //����int����
{
	int intArray[] = { 7,6,5,2,16,32,4 };//����

	int num = sizeof(intArray) / sizeof(int);//���鳤��

	mySort(intArray, num);//��������ģ��

	printArray(intArray, num);//���ô�ӡģ��
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
};