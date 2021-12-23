////���� 10-1 [�� ���� ����� ������ �����ε�]
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{  }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//
//	//���� 2
//	Point& operator+=(const Point& ref)
//	{	
//		this->xpos += ref.xpos;
//		this->ypos += ref.ypos;
//		return *this;
//	}
//	Point operator-=(const Point& ref)
//	{
//		this->xpos -= ref.xpos;
//		this->ypos -= ref.ypos;
//		return *this;
//	}
//	friend Point operator+(const Point& pos1, const Point& pos2);
//	friend Point operator-(const Point& pos1, const Point& pos2);
//	friend bool operator== (const Point & pos1, const Point & pos2);
//	friend bool operator!=(const Point& pos1, const Point& pos2);
//
//};
//
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
//
//
////���� 1
//Point operator-(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
//	return pos;
//}
//
//
////���� 3
//bool operator==(const Point& pos1,const Point& pos2)
//{
//	if ((pos1.xpos == pos2.xpos) && (pos1.ypos == pos2.ypos))
//		return true;
//	else
//		return false;
//
//}
//bool operator!=(const Point& pos1, const Point& pos2)
//{
//	//return !(pos1==pos2)
//	if (operator==(pos1, pos2))
//		return false;
//	else
//		return true;
//}
//
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3(15, 30);
//	Point pos4 = pos1 + pos3;
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	pos4.ShowPosition();
//	pos1 += pos3;
//
//
//
//
//	
//	return 0;
//}


//***************************************************************************************************************************************


//���� 10-2 [���� ������ �����ε�]

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{  }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//
//	//����1 : ���׿����� ����Լ��� �����ε�
//	Point& operator-()
//	{	
//		this->xpos = -xpos;
//		this->ypos = -ypos;
//		return *this;
//	}
//
//	friend Point& operator--(Point& ref);
//	friend Point& operator~(Point& ref);
//
//};
//
//Point& operator--(Point& ref)
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//
////����2
//Point& operator~(Point& ref)
//{
//	int temp = ref.xpos;
//	ref.xpos = ref.ypos;
//	ref.ypos = temp;
//	return ref;
//
//	/*Point pos(ref.ypos, ref.xpos);
//	return pos;*/
//}
//
//
//
//int main(void)
//{
//	Point pos1(9,-7);
//	pos1.ShowPosition();
//
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//	(~pos2).ShowPosition();
//	pos2.ShowPosition();
//	return 0;
//}


//***************************************************************************************************************************************


//���� 10-3 [�Է��� ���� >>�������� �����ε�]

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);

};


ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

istream& operator>>(istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main(void)
{

	Point pos1;
	cout << "x , y ��ǥ ������ �Է� : ";
	cin >> pos1;
	cout << pos1;

	Point pos2;
	cout << "x , y ��ǥ ������ �Է� : ";
	cin >> pos2;
	cout << pos2;

	return 0;
}
