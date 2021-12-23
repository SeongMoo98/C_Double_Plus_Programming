#include <iostream>
#include"rectangle생성자.h"
using namespace std;

//함수정의
//bool Rectangle::InitMembers(const Point& ul, const Point& lr)
//{
//	//직사각형이라 좌 상단 좌표값이 우 하단 좌표값보다 크다
//	if (ul.GetX() > lr.GetX() || ul.GetY() >> lr.GetY())
//	{
//		cout << "잘못된 위치정보 전달" << endl;
//		return false;
//	}
//	upLeft = ul;
//	lowRight = lr;
//	return true;
//}


Rectangle::Rectangle(const int& x1, const int& y1, const int& , const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{
	//멤버 이니셜라이저
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 :" << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << "]" << endl;
	cout << "우 하단 :" << '[' << lowRight.GetX() << ",";
	cout << lowRight.GetY() << "]" << endl;
}
