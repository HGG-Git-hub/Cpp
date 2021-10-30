#include"global.h"

/*
动态多态满足的条件
1.有继承关系
2.子类重写父类虚函数
*/
//动物类
class Animal 
{
public:
	//虚函数
	virtual void speak() 
	{
		cout << "动物语言" << endl;
	}
};
//猫类
class Cat :public Animal 
{
public:
	//虚函数重写，返回值类型 函数名 参数列表 需要完全相同
	void speak() 
	{
		cout << "小猫喵喵喵" << endl;
	}
};
//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗汪汪汪" << endl;
	}
};
//执行说话的函数
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
	cout << "Animal的字节长:" << sizeof(Animal) << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};