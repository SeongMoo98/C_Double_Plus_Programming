#include<iostream>
#include<cstdlib>

using namespace std;



class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];

	}
	int& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array Index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};



////const �Լ��� �̿��� �����ε��� Ȱ��
//class BoundCheckIntArray
//{
//private:
//	int* arr;
//	int arrlen;
//	//����� ������ ���� �ڵ� �ֳ��ϸ� �迭�� ���ϼ��� �����ϱ� ����
//	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
//	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr);
//public:
//	BoundCheckIntArray(int len) :arrlen(len)
//	{
//		arr = new int[len];
//	}
//	int& operator[](int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array Index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int& operator[](int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array Index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int GetArrLen()const { return arrlen;}
//
//	~BoundCheckIntArray()
//	{
//		delete[]arr;
//	}
//};
//
//void ShowAllData(const BoundCheckIntArray& ref)
//{
//	int len = ref.GetArrLen();
//	for (int idx = 0; idx < len;idx++)
//	{
//		cout << ref[idx] << endl;
//	}
//}




////��ü�� �����ϴ� �迭����� Ŭ����
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {  }
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class BoundCheckPointArray
//{
//private:
//	Point* arr;
//	int arrlen;
//	BoundCheckPointArray(const BoundCheckPointArray& arr) { }
//	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) { }
//
//public:
//	BoundCheckPointArray(int len) :arrlen(len)
//	{
//		arr = new Point[len];
//	}
//
//	Point& operator[] (int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	Point operator[] (int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	int GetArrLen() const
//	{
//		return arrlen;
//	}
//
//	~BoundCheckPointArray()
//	{
//		delete[]arr;
//	}
//};



int main(void)
{
	
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}


	////const
	//BoundCheckIntArray arr(5);
	//for (int i = 0; i < 5; i++)
	//{
	//	arr[i] = (i + 1) * 11;
	//}
	//ShowAllData(arr);


	////��ü�� �����ϴ� �迭����� Ŭ����
	//BoundCheckPointArray arr(3);
	//arr[0] = Point(3, 4);
	//arr[1] = Point(5, 6);
	//arr[2] = Point(7, 8);

	//for (int i = 0; i < arr.GetArrLen(); i++)
	//	cout << arr[i];


	


	return 0;
}