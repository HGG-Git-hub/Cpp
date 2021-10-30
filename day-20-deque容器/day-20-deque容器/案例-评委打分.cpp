#include"global.h"

//创建选手类
class Person 
{
public:
	string m_name;
	int m_score;
public:
	Person(string name,int score) //构造函数赋初值
	{
		this->m_name = name;
		this->m_score = score;
	}

};

//创建选手
void createPerson(vector<Person>& v) 
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) 
	{
		string name = "选手:";
		name += nameSeed[i];

		int score = 0;//初始分数为0

		Person p(name,score);

		v.push_back(p);//将创建的对象放入到了容器中
	}
	cout << v.size() << endl;//目前容器v的大小
}
//选手打分
void setScore(vector<Person>& v) 
{
	//遍历容器中的选手，一个个打分
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的打分放入到一个deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++) 
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		//cout << it->m_name << endl;
		//cout << "得分：" << " ";
		/*for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}*/
		//cout << endl;
		//排序，找出最高分和最低分
		sort(d.begin(),d.end());
		//去除最低分
		d.pop_front(); 
		//去除最高分
		d.pop_back();

		//求取平均分
		int num = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) 
		{
			num += (*dit);//累加每个评委的分数
		}
		//平均分
		int avg = num / d.size();
	
		//将平均分赋值给选手
		it->m_score = avg;
	}
}
//选手得分
void getSore(vector<Person>& v) 
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << it->m_name << " 得分：" << (*it).m_score <<endl;
	}
}
int main() 
{
	//随机树种子
	srand((unsigned int)time(NULL));
	//1.创建五名选手，放到vector中
	vector<Person>v;//存放选手的容器v
	createPerson(v);

	//给5个选手打分
	setScore(v);

	//显示最后的得分
	getSore(v);

	system("pause");
	return 0;
};