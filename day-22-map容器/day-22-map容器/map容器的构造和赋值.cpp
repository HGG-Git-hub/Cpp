#include"global.h"
void printMap(map<int,int>&m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << "key=" << (*it).first << " " <<"value：" << (*it).second << endl;
	}
}
void test01() 
{
	//创建map容器
	map<int,int>mp;

	//插入数据
	//map容器中的元素都是(pair）对组
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 20));
	mp.insert(pair<int, int>(2, 30));

	//输出按照key的顺序自动排序
	printMap(mp);

	//拷贝构造
	map<int, int>m2(mp);
	cout << "拷贝构造m2：" << endl;
	printMap(m2);
	
	//赋值
	map<int, int>m3;
	m3 = m2;
	cout << "赋值操作m3：" << endl;
	printMap(m3);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};