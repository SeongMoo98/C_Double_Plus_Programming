#include <iostream>
#include "PointTemplate.h"
//�� �ҽ������� ���� ������ �Ǳ�� ������, ���ϴ��� ������ ��Ģ�� ���� ������ ������ ���� x 
//���� �Լ��� ���� cpp������ header������ ����κп� �� �ְų� �Ʒ�ó�� ���Խ�Ŵ
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