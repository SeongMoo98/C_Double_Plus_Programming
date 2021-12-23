#include <iostream>
using namespace std;
//후위증감
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
	//전위증가 전위감소
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

	//후위증가 후위감소
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
////전역함수 전위 증가 감소
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
	cout << "x,y 좌표 순으로 입력 : ";
	cin >> pos;
	cout << pos;



	return 0;
}