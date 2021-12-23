#include<iostream>
using namespace std;

////멤버함수에 의한 연산자 오버로딩- pos1.operator+(pos2)
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	//operator+ 라는 이름의 함수
//	Point operator+(const Point& ref)
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//	////복습용 복사생성자
//	//Point(const Point& copy)
//	//	:xpos(copy.xpos), ypos(copy.ypos)
//	//{
//	//	cout << "복사생성자" << endl;
//	//}
//};



////전역함수에 의한 연산자 오버로딩 - operator+(pos1,pos2)
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//	////복습용 복사생성자
//	//Point(const Point& copy)
//	//	:xpos(copy.xpos), ypos(copy.ypos)
//	//{
//	//	cout << "복사생성자" << endl;
//	//}
//	//friend Point operator+(const Point&, const Point&);
//};
//
////전역함수 정의
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
int main(void)
{
	//멤버함수
	/*Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 =pos1+pos2 + pos3;
	
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();*/


	////전역함수
	//Point pos1(3, 4);
	//Point pos2(10, 20);
	//Point pos3 = pos1+pos2;   
	//Point pos4 = operator+(pos1 , pos2+pos3);

	//pos1.ShowPosition();
	//pos2.ShowPosition();
	//pos3.ShowPosition();
	//pos4.ShowPosition();

	//////멤버함수나 전역함수나 결과는 같지만 해석하는 방법이 달라진다.




	return 0;
}