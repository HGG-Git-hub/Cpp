#include"global.h"
#define CE_HUA  0
#define MEI_SHU 1
#define YAN_FA  2
//创建员工类
class Worker 
{
public:
	string m_name;
	int m_salary;
};
void createWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) 
	{
		Worker w;
		w.m_name = "员工";
		w.m_name += nameSeed[i];
		w.m_salary = rand() % 10000 + 10000; //10000~19999
		v.push_back(w);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	//遍历员工容器里的员工
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) 
	{
		//产生一个随机编号
		int depID = rand() % 3;//0 1 2

		//将员工插入到分组中
		//depID--部门编号，*it----具体的员工
		m.insert(make_pair(depID,*it));
	}
}
void showWorker(multimap<int, Worker>&m)
{
	//CE_HUA  0
	cout << "策划部门：" << endl;
	//寻找策划部门，返回的是迭代器
	multimap<int, Worker>::iterator pos = m.find(CE_HUA);
	//统计策划部门的人数
	int num = m.count(CE_HUA);
	//一个索引值
	int index = 0;
	/*迭代器指向CE_HUA部门的开头，迭代器遍历到最后
	  并且索引值小于部门的人数，最后让index++，迭代器后移*/
	for (multimap<int, Worker>::iterator pos = m.find(CE_HUA); pos!=m.end()&&index < num; pos++,index++)
	{
		cout << " 姓名：" <<(*pos).second.m_name <<
			    " 工资：" << (*pos).second.m_salary << endl;
	}
	cout << "美术部门：" << endl;
	
	//MEI_SHU 1
	//寻找美术部门，返回的是迭代器
	pos = m.find(MEI_SHU);
	//统计美术部门的人数
	num = m.count(MEI_SHU);
	//一个索引值
	index = 0;
	/*迭代器指向MEI_SHU部门的开头，迭代器遍历到最后
	  并且索引值小于部门的人数，最后让index++，迭代器后移*/
	for (multimap<int, Worker>::iterator pos = m.find(MEI_SHU); pos != m.end() && index < num; pos++, index++)
	{
		cout << " 姓名：" << (*pos).second.m_name <<
				" 工资：" << (*pos).second.m_salary << endl;
	}
	cout << "研发部门：" << endl;
	
	//YAN_FA  2
	//寻找研发部门，返回的是迭代器
	pos = m.find(YAN_FA);
	//统计研发部门的人数
	num = m.count(YAN_FA);
	//一个索引值
	index = 0;
	/*迭代器指向MEI_SHU部门的开头，迭代器遍历到最后
	  并且索引值小于部门的人数，最后让index++，迭代器后移*/
	for (multimap<int, Worker>::iterator pos = m.find(YAN_FA); pos != m.end() && index < num; pos++, index++)
	{
		cout << " 姓名：" << (*pos).second.m_name <<
				" 工资：" << (*pos).second.m_salary << endl;
	}
}
void test01() 
{
	//存放员工的容器
	vector<Worker>v_Worker;
	//创建员工的函数
	createWorker(v_Worker);
	//测试
	/*for (vector<Worker>::iterator it = v_Worker.begin(); it != v_Worker.end(); it++) 
	{
		cout << it->m_name << " " << it->m_salary << endl;
	}*/
	//将员工分组的函数
	multimap<int, Worker>mWorker;//key,表示部门编号，Worker表示具体的员工
	setGroup(v_Worker, mWorker);
	//分组显示员工
	showWorker(mWorker);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};