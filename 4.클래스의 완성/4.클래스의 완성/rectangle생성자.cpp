#include <iostream>
#include"rectangle������.h"
using namespace std;

//�Լ�����
//bool Rectangle::InitMembers(const Point& ul, const Point& lr)
//{
//	//���簢���̶� �� ��� ��ǥ���� �� �ϴ� ��ǥ������ ũ��
//	if (ul.GetX() > lr.GetX() || ul.GetY() >> lr.GetY())
//	{
//		cout << "�߸��� ��ġ���� ����" << endl;
//		return false;
//	}
//	upLeft = ul;
//	lowRight = lr;
//	return true;
//}


Rectangle::Rectangle(const int& x1, const int& y1, const int& , const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{
	//��� �̴ϼȶ�����
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ��� :" << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << "]" << endl;
	cout << "�� �ϴ� :" << '[' << lowRight.GetX() << ",";
	cout << lowRight.GetY() << "]" << endl;
}
