#include"global.h"
//����ѧ���ṹ��
struct student
{
	string sName;
	int score;
};
//������ʦ�ṹ��
struct teacher
{
	string tName;
	struct student sArray[5];
};
void all(struct teacher tArray[3], int len) 
{
	//�����������ӣ����ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��,������ͷ�ļ�
	srand((unsigned int)time(NULL));

	string nameSeed = "ABCDE";  
	for (int i = 0; i < len; i++) 
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i]; //�����ʦ������
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];  //�����Ӧѧ��������
			//1.ϵͳ���������:rand()%61 ��ʾ����0-60������� ��40֮�� Ϊ40-100
			int num = rand() % 61 + 40 ;
			tArray[i].sArray[j].score = num;		//���ѧ���ĳɼ���
		}
	}
}
void print_all(struct teacher tArray[],int len)
{
	for (int i = 0; i < len; i++) 
	{
		cout <<"��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) 
		{
			cout << "\tѧ����������" << tArray[i].sArray[j].sName <<" ";
			cout <<"\tѧ���ķ�����" << tArray[i].sArray[j].score<< endl;
		}
	}
}
int main() 
{
	//����3����ʦ������
	struct teacher tArray[3];
	//ͨ����������ʦ��ѧ����ֵ
	int len = (sizeof(tArray)/sizeof(tArray[0]));
	all(tArray,len);
	//��ӡ���
	print_all(tArray,len);

	system("pause");
	return 0;
};

