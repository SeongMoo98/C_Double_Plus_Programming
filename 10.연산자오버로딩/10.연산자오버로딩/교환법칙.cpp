#include<iostream>
using namespace std;


class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}


	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator*(int times,Point& ref);
};
//교환법칙
Point operator*(int times, Point& ref)
{
	Point pos(ref.xpos * times, ref.ypos * times);
	return ref*times;//ref에 대해서 operator*멤버함수 연산실행
}

int main(void)
{
	/*Point pos(1, 2);
	Point cpy;

	cpy = pos * 3;
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();*/


	//교환법칙
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;
	cpy.ShowPosition();

	cpy = 2* pos * 3;
	cpy.ShowPosition(); 
	




	return 0;
}