#include <iostream>
#include"rectangle.h"
using namespace std;

//함수정의
bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
	//직사각형이라 좌 상단 좌표값이 우 하단 좌표값보다 크다
	if (ul.GetX() > lr.GetX() || ul.GetY() >> lr.GetY())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}


void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 :" << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << "]" << endl;
	cout << "우 하단 :" << '[' << lowRight.GetX() << ",";
	cout << lowRight.GetY() << "]" << endl;
}
