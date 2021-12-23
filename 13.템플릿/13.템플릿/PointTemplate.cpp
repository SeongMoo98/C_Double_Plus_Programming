#include<iostream>
#include "PointTemplate.h"
using namespace std;


template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{ }


template <typename T>
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << "," << ypos << ']' << endl;
}

template<class T>
T Point<T>::Add(T num1, T num2)
{
	xpos += num1;
	ypos += num2;
	return xpos + ypos;
}