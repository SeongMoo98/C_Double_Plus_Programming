#include <iostream>
#include "PointTemplate.h"
//두 소스파일이 같이 컴파일 되기는 하지만, 파일단위 컴파일 원칙에 의해 서로의 내용을 참조 x 
//따라서 함수의 정의 cpp파일을 header파일의 선언부분에 다 넣거나 아래처럼 포함시킴
#include "PointTemplate.cpp" 

using namespace std;


int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	cout << "xpos + ypos = ";
	int num=pos1.Add();
	cout << num << endl;

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point <char> pos3('P','F');
	pos3.ShowPosition();

	return 0;
}