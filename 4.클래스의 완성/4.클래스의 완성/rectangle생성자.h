#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
using namespace std;

#include  "point������.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	//bool InitMembers(const Point& ul, const Point& lr); //Point�� const ����Լ��� const�θ� ����,ȣ�Ⱑ��
	Rectangle(const int& x1, const int& x2, const int& y1, const int& y2);
	void ShowRecInfo() const;

};

#endif