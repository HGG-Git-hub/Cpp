#include"global.h"

/*
��̬��̬���������
1.�м̳й�ϵ
2.������д�����麯��
*/
//������
class Animal 
{
public:
	//�麯��
	virtual void speak() 
	{
		cout << "��������" << endl;
	}
};
//è��
class Cat :public Animal 
{
public:
	//�麯����д������ֵ���� ������ �����б� ��Ҫ��ȫ��ͬ
	void speak() 
	{
		cout << "Сè������" << endl;
	}
};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С��������" << endl;
	}
};
//ִ��˵���ĺ���
void doSpeak(Animal & animal) 
{
	animal.speak();
}
void test01() 
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
void test02() 
{
	cout << "Animal���ֽڳ�:" << sizeof(Animal) << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};