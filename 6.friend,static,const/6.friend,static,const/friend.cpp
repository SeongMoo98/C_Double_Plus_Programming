#include <iostream>
#include<cstring>
using namespace std;

//class Girl; // Girl �̶�� �̸��� Ŭ���� �̸��� �˸�
//
//class Boy
//{
//private:
//	int height;
//	friend class Girl;  //Ŭ���� Girl�� ���� friend ���� - private ���� ���𰡴�
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
////ref��ptr�� �Ҽ��� ����?
//void Boy::ShowYourFriendInfo(Girl& frn)
//{
//	cout << "Her phone number : " <<frn.phNum << endl;
//}
//
//void Girl::ShowYourFriendInfo(Boy& frn)
//{
//	cout << "His height number : " << frn.height << endl;
//}



//�Լ��� friend ����
class Point; //PointOP ���� Point frined ������ ���� Ŭ���� �̸����� ���� 

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0) {}
	//����Լ� ���� -��ȯ�� Point Ŭ����,�Ű������� const Point ������
	Point PointAdd(const Point&, const Point&); //�Ű����� ���ص��� �ڷ����� �ص� ����
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

	//PoinOP�� ����Լ��� ���� friend ����- Ŭ������ Ư�� ����Լ��� ������� friend ����
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&); //�����Լ� ����� freind ���� 
};

//�Լ�����
Point PointOP::PointAdd(const Point&pnt1, const Point&pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y); //private ��� ����
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


	//�Լ��� friend ����
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