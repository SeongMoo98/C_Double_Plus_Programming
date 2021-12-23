//문제 11-1 [깊은 복사를 하는 대입 연산자의 정의]


////문제 1
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun
//{
//private:
//	int bullet;    	// 장전된 총알의 수
//public:
//	Gun(int bnum) : bullet(bnum)
//	{ }
//	void Shut()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police
//{
//private:
//	int handcuffs;    // 소유한 수갑의 수
//	Gun* pistol;     // 소유하고 있는 권총
//public:
//	Police(int bnum, int bcuff) : handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	//복사생성자
//	//Police obj1(obj2) or Police obj1=obj2
//	Police(const Police& cpy)
//	{
//		
//	}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shut()
//	{
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shut();
//	}
//	//대입 연산자
//	//Police obj(1,1) ------> obj=obj1
//	Police& operator=(const Police& ref)
//	{
//
//	}
//
//	
//	~Police()
//	{
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void)
//{
//	Police pman1(5, 3);
//	Police pman2(0, 3);
//	pman1.Shut();
//	pman2.PutHandcuff();
//
//	pman1.ShowInfo();
//	pman2.ShowInfo();
//
//	Police pman3(1,1);
//	pman3 = pman1;
//	Police pman4=pman2;
//	pman3.ShowInfo();
//	pman4.ShowInfo();
//	return 0;
//}


//***************************************************************************************************************************************


//문제 11-2 [C++ 기반의 데이터 입출력]

//문제 1
#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {  }
	friend ostream& operator<<(ostream& os, const Point& pos);
	friend ostream& operator<<(ostream& os, const Point* pos);

};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}
ostream& operator<<(ostream& os, const Point* pos)
{
	os << "[" << pos->xpos << "," << pos->ypos << "]" << endl;
	return os;
}
typedef Point* POINT_PTR;

class BoundCheckPointPtrArray
{
private:
	POINT_PTR* arr;
	int arrlen;

	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { }
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) { }

public:
	BoundCheckPointPtrArray(int len) :arrlen(len)
	{
		arr = new POINT_PTR[len];
	}
	POINT_PTR& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	POINT_PTR operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	int GetArrLen() const
	{
		return arrlen;
	}
	~BoundCheckPointPtrArray()
	{
		delete[]arr;
	}

};




int main(void)
{
	BoundCheckPointPtrArray arr(3);
	arr[0] = new Point(3, 4);
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);


	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << *(arr[i]);
	cout << endl << endl;

	//여기를 오버로딩
	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << arr[i];

	delete arr[0];
	delete arr[1];
	delete arr[2];
	return 0;
}


//***************************************************************************************************************************************
