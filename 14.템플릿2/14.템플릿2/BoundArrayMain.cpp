#include<iostream>
#include"ArrayTemplate.h"
#include"PointTemplate.h"
using namespace std;


int main()
{
	//Point�� int ������ �ϰ� �� Point��
	BoundCheckArray<Point<int>> oarr1(3);
	oarr1[0] = Point <int>(3, 4);
	oarr1[1] = Point <int>(5, 6);
	oarr1[2] = Point <int>(7, 8);


	for (int i = 0; i < 3; i++)
	{
		oarr1[i].ShowPosition();
	}

	//Point�� double ������ �ϰ� �� Point��
	BoundCheckArray<Point<double>> oarr2(3);
	oarr2[0] = Point <double>(3.14, 4.31);
	oarr2[1] = Point <double>(5.09, 6.07);
	oarr2[2] = Point <double>(7.82, 8.54);


	for (int i = 0; i < 3; i++)
	{
		oarr2[i].ShowPosition();
	}

	////Point�� int ������ ������ �ϰ� �� Point��
	//BoundCheckArray<Point<int *>> oarr3(3);
	//oarr3[0] = Point <int*>(3.14, 4.31);
	//oarr3[1] = Point <int*>(5.09, 6.07);
	//oarr3[2] = Point <int*>(7.82, 8.54);
	

	typedef Point<int>* POINT_PTR;
	BoundCheckArray<POINT_PTR> oparr(3);
	oparr[0] = new Point<int>(11, 12);
	oparr[1] = new Point<int>(13, 14);
	oparr[2] = new Point<int>(15, 16);

	for (int i = 0; i < 3; i++)
	{
		oparr[i]->ShowPosition();
	}

	delete oparr[0], oparr[1], oparr[2];
}