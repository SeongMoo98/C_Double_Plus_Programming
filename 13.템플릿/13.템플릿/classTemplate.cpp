#include<iostream>
using namespace std;

//Ŭ�������ø�
template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{

	}
	void ShowPosition()const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
};


//
////Ŭ���� ���ø��� ����� ������ �и�
//template <typename T>
//class Point
//{
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0);
//	void ShowPosition() const;
//};
//
////������
//template<typename T>
//Point<T>::Point(T x, T y) : xpos(x), ypos(y)
// {}
//
//template<typename T>
//void Point<T>::ShowPosition() const
//{
//	cout << '[' << xpos << "," << ypos << ']' << endl;
//}

int main(void)
{

	/*Point<int>pos1(3, 4);
	Point pos5(4, 5);
	pos1.ShowPosition();

	Point <double>pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point <char> pos3('P','F');
	pos3.ShowPosition();*/


	////���ǿ� ������ �и�
	//Point<int>pos1(3, 4);
	//pos1.ShowPosition();

	//Point <double>pos2(2.4, 3.6);
	//pos2.ShowPosition();

	//Point <char> pos3('P','F');
	//pos3.ShowPosition();




	return 0;
}