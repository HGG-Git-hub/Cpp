#include"global.h"

//����ѡ����
class Person 
{
public:
	string m_name;
	int m_score;
public:
	Person(string name,int score) //���캯������ֵ
	{
		this->m_name = name;
		this->m_score = score;
	}

};

//����ѡ��
void createPerson(vector<Person>& v) 
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) 
	{
		string name = "ѡ��:";
		name += nameSeed[i];

		int score = 0;//��ʼ����Ϊ0

		Person p(name,score);

		v.push_back(p);//�������Ķ�����뵽��������
	}
	cout << v.size() << endl;//Ŀǰ����v�Ĵ�С
}
//ѡ�ִ��
void setScore(vector<Person>& v) 
{
	//���������е�ѡ�֣�һ�������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�Ĵ�ַ��뵽һ��deque������
		deque<int>d;
		for (int i = 0; i < 10; i++) 
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}
		//cout << it->m_name << endl;
		//cout << "�÷֣�" << " ";
		/*for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}*/
		//cout << endl;
		//�����ҳ���߷ֺ���ͷ�
		sort(d.begin(),d.end());
		//ȥ����ͷ�
		d.pop_front(); 
		//ȥ����߷�
		d.pop_back();

		//��ȡƽ����
		int num = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) 
		{
			num += (*dit);//�ۼ�ÿ����ί�ķ���
		}
		//ƽ����
		int avg = num / d.size();
	
		//��ƽ���ָ�ֵ��ѡ��
		it->m_score = avg;
	}
}
//ѡ�ֵ÷�
void getSore(vector<Person>& v) 
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << it->m_name << " �÷֣�" << (*it).m_score <<endl;
	}
}
int main() 
{
	//���������
	srand((unsigned int)time(NULL));
	//1.��������ѡ�֣��ŵ�vector��
	vector<Person>v;//���ѡ�ֵ�����v
	createPerson(v);

	//��5��ѡ�ִ��
	setScore(v);

	//��ʾ���ĵ÷�
	getSore(v);

	system("pause");
	return 0;
};