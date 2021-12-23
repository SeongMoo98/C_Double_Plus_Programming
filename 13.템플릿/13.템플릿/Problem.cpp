//문제 13-3 [함수 템플릿의 정의]

////문제1
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x),ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//	//대입연산자나 복사연산자는 필요없나??
//	Point& operator=(const Point& ref)
//	{
//		this->xpos = ref.xpos;
//		this->ypos = ref.ypos;
//		return *this;
//	}
//};
//
//template <typename T>
//void SwapData(T& x, T& y)
//{
//	T tempdata = x;
//	x = y;
//	y = tempdata;
//}
//
//int main()
//{
//	Point pos1(3, 5);
//	Point pos2(10, 7);
//
//	SwapData<Point>(pos1, pos2);
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//
//
//	return 0;
//}


//***************************************************************************************************************************************


////문제 2
//#include<iostream>
//using namespace std;
//
//template <typename T>
//T SumArray(T arr[], int len)
//{
//	T sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int main(void)
//{
//	int arr[50];
//	for (int i = 0; i < 50; i++)
//	{
//		arr[i] = i * i;
//	}
//	int Sum_int=SumArray<int>(arr, 50);
//	cout << Sum_int << endl;
//	return 0;
//}


//***************************************************************************************************************************************


