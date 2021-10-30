#include"global.h"
#define CE_HUA  0
#define MEI_SHU 1
#define YAN_FA  2
//����Ա����
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
		w.m_name = "Ա��";
		w.m_name += nameSeed[i];
		w.m_salary = rand() % 10000 + 10000; //10000~19999
		v.push_back(w);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	//����Ա���������Ա��
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) 
	{
		//����һ��������
		int depID = rand() % 3;//0 1 2

		//��Ա�����뵽������
		//depID--���ű�ţ�*it----�����Ա��
		m.insert(make_pair(depID,*it));
	}
}
void showWorker(multimap<int, Worker>&m)
{
	//CE_HUA  0
	cout << "�߻����ţ�" << endl;
	//Ѱ�Ҳ߻����ţ����ص��ǵ�����
	multimap<int, Worker>::iterator pos = m.find(CE_HUA);
	//ͳ�Ʋ߻����ŵ�����
	int num = m.count(CE_HUA);
	//һ������ֵ
	int index = 0;
	/*������ָ��CE_HUA���ŵĿ�ͷ�����������������
	  ��������ֵС�ڲ��ŵ������������index++������������*/
	for (multimap<int, Worker>::iterator pos = m.find(CE_HUA); pos!=m.end()&&index < num; pos++,index++)
	{
		cout << " ������" <<(*pos).second.m_name <<
			    " ���ʣ�" << (*pos).second.m_salary << endl;
	}
	cout << "�������ţ�" << endl;
	
	//MEI_SHU 1
	//Ѱ���������ţ����ص��ǵ�����
	pos = m.find(MEI_SHU);
	//ͳ���������ŵ�����
	num = m.count(MEI_SHU);
	//һ������ֵ
	index = 0;
	/*������ָ��MEI_SHU���ŵĿ�ͷ�����������������
	  ��������ֵС�ڲ��ŵ������������index++������������*/
	for (multimap<int, Worker>::iterator pos = m.find(MEI_SHU); pos != m.end() && index < num; pos++, index++)
	{
		cout << " ������" << (*pos).second.m_name <<
				" ���ʣ�" << (*pos).second.m_salary << endl;
	}
	cout << "�з����ţ�" << endl;
	
	//YAN_FA  2
	//Ѱ���з����ţ����ص��ǵ�����
	pos = m.find(YAN_FA);
	//ͳ���з����ŵ�����
	num = m.count(YAN_FA);
	//һ������ֵ
	index = 0;
	/*������ָ��MEI_SHU���ŵĿ�ͷ�����������������
	  ��������ֵС�ڲ��ŵ������������index++������������*/
	for (multimap<int, Worker>::iterator pos = m.find(YAN_FA); pos != m.end() && index < num; pos++, index++)
	{
		cout << " ������" << (*pos).second.m_name <<
				" ���ʣ�" << (*pos).second.m_salary << endl;
	}
}
void test01() 
{
	//���Ա��������
	vector<Worker>v_Worker;
	//����Ա���ĺ���
	createWorker(v_Worker);
	//����
	/*for (vector<Worker>::iterator it = v_Worker.begin(); it != v_Worker.end(); it++) 
	{
		cout << it->m_name << " " << it->m_salary << endl;
	}*/
	//��Ա������ĺ���
	multimap<int, Worker>mWorker;//key,��ʾ���ű�ţ�Worker��ʾ�����Ա��
	setGroup(v_Worker, mWorker);
	//������ʾԱ��
	showWorker(mWorker);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};