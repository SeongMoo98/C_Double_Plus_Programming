#include <iostream>
using namespace std;
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
	//�������� ��������
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	Point& operator--()
	{
		xpos -= 1;
		ypos -= 1;
		return *this;
	}

	//�������� ��������
	const Point& operator++(int)
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	const Point& operator--(int)
	{
		const Point retobj(xpos, ypos);
		xpos -= 1;
		ypos -= 1;
		return retobj;
	}
	/*friend Point& operator++(Point& ref);
	friend Point& operator--(Point& ref);
	friend Point& operator++(Point& ref,int);
	friend Point& operator--(Point& ref,int);*/

	friend ostream& operator<<(ostream& os, const Point& pos);
	friend istream& operator>>(istream& is, Point& pos);



};
////�����Լ� ���� ���� ����
//Point& operator++(Point& ref)
//{
//	ref.xpos += 1;
//	ref.ypos += 1;
//	return ref;
//}
//Point& operator--(Point& ref)
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//Point& operator++(Point& ref,int)
//{
//	Point retobj(ref.xpos, ref.ypos);
//	ref.xpos += 1;
//	ref.ypos -= 1;
//	return retobj;
//}
//Point& operator--(Point& ref,int)
//{
//	Point retobj(ref.xpos, ref.ypos);
//	ref.xpos += 1;
//	ref.ypos -= 1;
//	return retobj;


ostream& operator<<(ostream& os, const Point& pos)
{
	os << "[" << pos.xpos << "," << pos.ypos << "]" << endl;
	return os;
}
istream& operator>>(istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main()
{
	Point obj(5, 7);
	obj++;
	++obj;
	++(++obj);
	obj.ShowPosition();

	obj--;
	--obj;
	obj.ShowPosition();

	Point pos;
	cout << "x,y ��ǥ ������ �Է� : ";
	cin >> pos;
	cout << pos;



	return 0;
}