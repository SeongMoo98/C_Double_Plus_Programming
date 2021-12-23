#include <iostream>
#include<cstring>
using namespace std;

//class Girl; // Girl 이라는 이름이 클래스 이름을 알림
//
//class Boy
//{
//private:
//	int height;
//	friend class Girl;  //클래스 Girl에 대한 friend 선언 - private 에도 선언가능
//public:
//	Boy(int len) :height(len) {}
//	void ShowYourFriendInfo(Girl& frn);
//};
//
//class Girl
//{
//private:
//	char phNum[20];
//public:
//	Girl(const char* num)
//	{
//		strcpy_s(phNum,sizeof(phNum),num);
//	}
//	void ShowYourFriendInfo(Boy &frn);
//	friend class Boy;
//};
//
//
////ref를ptr로 할수는 없나?
//void Boy::ShowYourFriendInfo(Girl& frn)
//{
//	cout << "Her phone number : " <<frn.phNum << endl;
//}
//
//void Girl::ShowYourFriendInfo(Boy& frn)
//{
//	cout << "His height number : " << frn.height << endl;
//}



//함수의 friend 선언
class Point; //PointOP 에서 Point frined 선언을 위해 클래스 이름임을 선언 

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0) {}
	//멤버함수 선언 -반환형 Point 클래스,매개변수가 const Point 참조자
	Point PointAdd(const Point&, const Point&); //매개변수 안해도됨 자료형만 해도 가능
	Point PointSub(const Point&, const Point&);
	~PointOP()
	{
		cout << "Operation times : " << opcnt << endl;
	}
};


class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos)
		:x(xpos), y(ypos)
	{	}

	//PoinOP의 멤버함수에 대해 friend 선언- 클래스의 특정 멤버함수를 대상으로 friend 선언
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&); //전역함수 대상의 freind 선언 
};

//함수정의
Point PointOP::PointAdd(const Point&pnt1, const Point&pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y); //private 멤버 접근
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x -pnt2.x, pnt1.y - pnt2.y);

}


int main(void)
{
	//Boy boy(170);
	//Girl girl("010-1234-5678");
	//boy.ShowYourFriendInfo(girl);
	//girl.ShowYourFriendInfo(boy);


	//함수의 friend 선언
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x :" << pos.x << ",";
	cout << "y:" << pos.y << endl;
}