#include<iostream>
using namespace std;

////����Լ��� ���� ������ �����ε�- pos1.operator+(pos2)
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
//	//operator+ ��� �̸��� �Լ�
//	Point operator+(const Point& ref)
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//	////������ ���������
//	//Point(const Point& copy)
//	//	:xpos(copy.xpos), ypos(copy.ypos)
//	//{
//	//	cout << "���������" << endl;
//	//}
//};



////�����Լ��� ���� ������ �����ε� - operator+(pos1,pos2)
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
//	////������ ���������
//	//Point(const Point& copy)
//	//	:xpos(copy.xpos), ypos(copy.ypos)
//	//{
//	//	cout << "���������" << endl;
//	//}
//	//friend Point operator+(const Point&, const Point&);
//};
//
////�����Լ� ����
//Point operator+(const Point& pos1, const Point& pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
int main(void)
{
	//����Լ�
	/*Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	Point pos4 =pos1+pos2 + pos3;
	
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();*/


	////�����Լ�
	//Point pos1(3, 4);
	//Point pos2(10, 20);
	//Point pos3 = pos1+pos2;   
	//Point pos4 = operator+(pos1 , pos2+pos3);

	//pos1.ShowPosition();
	//pos2.ShowPosition();
	//pos3.ShowPosition();
	//pos4.ShowPosition();

	//////����Լ��� �����Լ��� ����� ������ �ؼ��ϴ� ����� �޶�����.




	return 0;
}