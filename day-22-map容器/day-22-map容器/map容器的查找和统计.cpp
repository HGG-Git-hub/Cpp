#include"global.h"

void printMap(map<int, int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << "key=:" << (*it).first << " value=：" << (*it).second << endl;
	}
}
void test01() 
{
	map<int, int>m;

	m.insert(make_pair(1,10));
	m.insert(pair<int, int>(2,20));

	printMap(m);

	//find(key); 查找`key`是否存在，若存在，返回该键的元素的迭代器，若不存在，返回`set.end(); `
	map<int, int>::iterator pos = m.find(1);
	if (pos != m.end()) 
	{
		cout << "找到了~" << endl;
		cout << "key=:" << (*pos).first << " value=：" << (*pos).second << endl;
	}
	else 
	{
		cout << "没找到~" << endl;
	}

	//count(key); 统计`key`的元素个数
	//map容器中的key不允许重复，所以查到的key个数，要么是1要么是0
	cout << "个数为：" << m.count(1) << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};