#ifndef __POINT_H_
#define __POINT_H_


class Point
{
private: //��������
	// x,y �� 0 �̻� 100����
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const; //const �Լ�
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);


	Point(const int& xpos, const int ypos);

};

#endif