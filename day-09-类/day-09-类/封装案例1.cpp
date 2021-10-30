#include"global.h"
class Cude 
{
private:
	double m_L;
	double m_W;
	double m_H;
public:
	//设置长宽高
	void set_m_L(double l) 
	{
		m_L = l;
	}
	void set_m_W(double w) 
	{
		m_W = w;
	}
	void set_m_H(double h) 
	{
		m_H = h;
	}
	//获取长宽高
	double get__m_L() 
	{
		return m_L;
	}
	double get__m_W()
	{
		return m_W;
	}
	double get__m_H()
	{
		return m_H;
	}
	//获取面积
	double get_area() 
	{
		return (2 * ((m_L * m_W) + (m_L * m_H) + (m_W * m_H)));
	}
	//获取体积
	double get_volume() 
	{
		return (m_L * m_W * m_H);
	}
	//利用成员函数判断两个立方体是否相等
	bool isSame_class(Cude& c) 
	{
		if (m_L=c.get__m_L() && m_W == c.get__m_W() && m_H == c.get__m_H())
		{
			return true;
		}
		return false;
	}
};
//利用全局函数判断，两个立方体是否相等
bool isSame(Cude& cu1, Cude& cu2) 
{
	//两个立方体的长宽高都相等
	if (cu1.get__m_L() == cu2.get__m_L() && cu1.get__m_W() == cu2.get__m_W() && cu1.get__m_H() == cu2.get__m_H())
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main() 
{
	//创建第一个立方体对象
	Cude cu1;
	cu1.set_m_L(10);
	cu1.set_m_W(10);
	cu1.set_m_H(11);

	cout << cu1.get__m_L() << endl;
	cout << cu1.get__m_W() << endl;
	cout << cu1.get__m_H() << endl;

	cout << cu1.get_area() << endl;

	cout << cu1.get_volume() << endl;
	
	//创建第二个立方体对象
	Cude cu2;
	cu2.set_m_L(10);
	cu2.set_m_W(10);
	cu2.set_m_H(10);

	//创建第三个立方体对象
	Cude cu3;
	cu3.set_m_L(10);
	cu3.set_m_W(10);
	cu3.set_m_H(10);

	//全局函数
	bool res=isSame(cu1,cu2);
	if (res)
	{
		cout << "相等" << endl;	
	}
	else 
	{
		cout << "不相等" << endl;
	}

	//成员函数
	res=cu1.isSame_class(cu2);
	if (res)
	{
		cout << "成员函数中：相等" << endl;
	}
	else
	{
		cout << "成员函数中：不相等" << endl;
	}

	system("pause");
	return 0;
};