#include<iostream>
#include<cstring>
using namespace std;


//template <typename T>
//class Point
//{
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0) : xpos(x),ypos(y)
//	{}
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//};
//
//template <typename T>
//class SimpleDataWrapper
//{
//private:
//	T mdata;
//public:
//	SimpleDataWrapper(T data) : mdata(data)
//	{ }
//	void ShowDataInfo()const
//	{
//		cout << "Data : " << mdata << endl;
//	}
//};
//
////템플릿클래스의 특수화
//template <>
//class SimpleDataWrapper <char *>
//{
//private:
//	char* mdata;
//public:
//	SimpleDataWrapper(char* data)
//	{
//		int len = strlen(data) + 1;
//		mdata = new char[len];
//		strcpy_s(mdata, len, data);
//	}
//	void ShowDataInfo()const
//	{
//		cout << "String : " << mdata << endl;
//		cout << "Length : " << strlen(mdata) << endl;
//	}
//	~SimpleDataWrapper()
//	{
//		delete[]mdata;
//	}
//};
//
//
//template <>
//class SimpleDataWrapper <Point<int>>
//{
//private:
//	Point<int> mdata;
//public:
//	SimpleDataWrapper(int x, int y) : mdata(x,y)
//	{ }
//	void ShowDataInfo()const
//	{
//		mdata.ShowPosition();
//	}
//};
//
//int main()
//{
//	SimpleDataWrapper<int> iwrap(170);
//	iwrap.ShowDataInfo();
//
//	char str[50] = "Class Template Specialization";
//	SimpleDataWrapper<char*> iwrap2(str);
//	iwrap2.ShowDataInfo();
//
//	SimpleDataWrapper<Point<int>> iwrap3(3, 7);
//	iwrap3.ShowDataInfo();
//}




//부분 특수화
template<typename T1, typename T2>
class MySimple
{
public:
	void WhoAreYou()
	{
		cout << "Size of T1 : " << sizeof(T1) << endl;
		cout << "Size of T2 : " << sizeof(T2) << endl;
		cout << "<typename T1, typename T2>"<< endl;

	}
};

template<>
class MySimple <int,double>
{
public:
	void WhoAreYou()
	{
		cout << "Size of int : " << sizeof(int) << endl;
		cout << "Size of double : " << sizeof(double) << endl;
		cout << "<int,double>" << endl;

	}
};


//부분특수화
template<typename T1>
class MySimple <T1,double>
{
public:
	void WhoAreYou()
	{
		cout << "Size of T1 : " << sizeof(T1) << endl;
		cout << "Size of double : " << sizeof(double) << endl;
		cout << "<T1,double>" << endl;
	}
};


int main()
{
	MySimple<char, double> obj1;
	obj1.WhoAreYou();

	MySimple<int, long> obj2;
	obj2.WhoAreYou();

	MySimple<int, double> obj3;
	obj3.WhoAreYou();

}