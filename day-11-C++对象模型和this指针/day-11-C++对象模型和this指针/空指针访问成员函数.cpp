#include"global.h"
class Person 
{
public:
	int m_age=0;

	void show_Person_name() 
	{
		cout << "show_Person_name" << endl;
	}
	void show_age() 
	{
		if (this == NULL) //解决下面冲突的办法
		{
			return;
		}
		cout<<"m_age=" << m_age << endl;
		//cout<<"m_age=" << this->m_age << endl;
		/*两者等价，系统会默认加上this，但不会显示出来，
		  this是指向对象的，但是目前案例没有定义对象，
		  函数被调用this指向p，p为空，this指针指向了空，空指针访问非空属性会引发冲突*/
	}
};
void test01() 
{
	Person* p = NULL;//Person类的一个指针，指向空

	p->show_Person_name();

	/*当p调用show_age这个函数时，this指针就会指向p，
		p为空，this指针指向了空，用空指针访问非空会引发冲突*/
	p->show_age();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};