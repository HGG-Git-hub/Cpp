#include"global.h"
void printMap(map<int, int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout <<"key=:" << (*it).first << " value=：" << (*it).second << endl;
	}
}
void test01() 
{
	map<int, int>m;

	//insert(elem); 在容器中插入元素
	//第一种
	m.insert(pair<int, int>(1,10));
	//第二种
	m.insert(make_pair(2, 10));
	//第三种
	m.insert(map<int, int>::value_type(3, 10));
	//第四种
	m[4] = 40;
	//不建议插入使用，如果key=5不存在,会自动创建一个key=5，value=0的对组
	//cout << m[5] << endl;
	//一般使用它访问确定存在的对组
	cout << m[4] << endl;

	//erase(pos);  删除`pos`迭代器所指的元素，返回下一个元素的迭代器
	map<int, int>::iterator it = m.begin();
	m.erase(it);
	printMap(m);

	//erase(key); 删除容器中值为`key`的元素
	cout << "-----------" << endl;
	m.erase(4);
	printMap(m);

	//erase(beg, end); 删除区间[beg, end)的所有元素，返回下一个元素的迭代器
	m.erase(m.begin(),m.end());
	printMap(m);

	//clear(); 清除所有元素
	m.clear();
	printMap(m);

}
int main() 
{
	test01();
	system("pause");
	return 0;
};