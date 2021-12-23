#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
using namespace std;

#include  "point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr); //Point�� const ����Լ��� const�θ� ����,ȣ�Ⱑ��
	void ShowRecInfo() const;

};

#endif