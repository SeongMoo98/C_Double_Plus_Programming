#include <iostream>
#include "point.h"
using namespace std;
//����Լ� ����
bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos<0)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}

int  Point::GetX() const
{
	return x;
}

int  Point::GetY() const
{
	return y;
}

//�׼��� �Լ�
bool  Point::SetX(int xpos)
{
	if (xpos<0 || xpos>100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos; //�Ű������� ���ڸ� �ް� ����Լ��� ������� ����-> ��������
	return true;
}

bool  Point::SetY(int ypos)
{
	if (ypos<0  || ypos>100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos; //�Ű������� ���ڸ� �ް� ����Լ��� ������� ����-> ��������
	return true;
}

