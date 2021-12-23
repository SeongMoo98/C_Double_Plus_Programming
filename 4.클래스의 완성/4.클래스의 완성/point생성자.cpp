#include <iostream>
#include "point생성자.h"
#include "point.h"
using namespace std;

//멤버함수 정의
//bool Point::InitMembers(int xpos, int ypos)
//{
//	if (xpos < 0 || ypos < 0)
//	{
//		cout << "벗어난 범위의 값 전달" << endl;
//		return false;
//	}
//	x = xpos;
//	y = ypos;
//	return true;
//}

Point::Point(const int& xpos, const int &ypos)
{
	x = xpos;
	y = ypos;
}

int  Point::GetX() const
{
	return x;
}

int  Point::GetY() const
{
	return y;
}

//액세스 함수
bool  Point::SetX(int xpos)
{
	if (xpos < 0 || xpos>100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos; //매개변수로 인자를 받고 멤버함수로 멤버변수 접근-> 정보은닉
	return true;
}

bool  Point::SetY(int ypos)
{
	if (ypos < 0 || ypos>100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos; //매개변수로 인자를 받고 멤버함수로 멤버변수 접근-> 정보은닉
	return true;
}