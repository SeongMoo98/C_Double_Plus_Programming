#include<iostream>
using namespace std;

////��������
////����Լ� - pos.operator++();
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	//�� ������
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point& operator--(Point& ref);
//};
////�����Լ� - operator--(pos);
//Point& operator--(Point& ref)
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}


//��������
class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}	

	//��������
	Point& operator++(int)  //int�� �������������� �����ε��� ��Ÿ���� ���- �ƹ����� ���� �׳� ���
	{	
		Point retobj(xpos, ypos);   //const Point retobj(*this)
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend Point operator--(Point&, int);
};

//�����Լ� - operator--(pos);
Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}
//��������
Point operator--(Point &ref,int)
{
	Point retobj(ref);   
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}
int main(void)
{
	/*Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();*/
	


	//��������
	Point pos(3, 5);
	Point cpy;
	cpy=pos--;
	
	cpy.ShowPosition();
	pos.ShowPosition();
	

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}