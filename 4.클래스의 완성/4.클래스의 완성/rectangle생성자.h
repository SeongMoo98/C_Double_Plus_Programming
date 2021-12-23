#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
using namespace std;

#include  "point생성자.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	//bool InitMembers(const Point& ul, const Point& lr); //Point의 const 멤버함수는 const로만 접근,호출가능
	Rectangle(const int& x1, const int& x2, const int& y1, const int& y2);
	void ShowRecInfo() const;

};

#endif