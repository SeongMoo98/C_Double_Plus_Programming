#ifndef __POINT_H_
#define __POINT_H_


class Point
{
private: 
	int x;
	int y;

public:
	//bool InitMembers(int xpos, int ypos);
	Point(const int& xpos, const int & ypos); //생성자 
	int GetX() const; //const 함수int
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);


};

#endif
