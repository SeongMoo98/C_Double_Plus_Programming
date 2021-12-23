#ifndef __POINT_H_
#define __POINT_H_


class Point
{
private: //정보은닉
	// x,y 는 0 이상 100이하
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const; //const 함수
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);


	Point(const int& xpos, const int ypos);

};

#endif