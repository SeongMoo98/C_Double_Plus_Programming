#include<iostream>
using namespace std;
////cout, endl 이해하기
//namespace mystd
//{ 
//	using namespace std;
//	class ostream
//	{
//	public:
//		void operator<<(const char* str)
//		{
//			printf("%s", str);
//		}
//		void operator<<(char str)
//		{
//			printf("%c", str);
//		}
//		void operator<<(int num)
//		{
//			printf("%d", num);
//		}
//		void operator<<(double e)
//		{
//			printf("%g", e);
//		}
//		void operator<<(ostream& (*fp)(ostream& ostm))
//		{
//			fp(*this);
//		}
//	};
//	ostream& endl(ostream& ostm)
//	{
//		ostm << '\n';
//		fflush(stdout);
//		return ostm;
//	}
//	ostream cout;
//}


//순서대로 작성
//namespace mystd
//{
//	using namespace std;
//	class ostream
//	{
//	public:
//		ostream& operator<<(const char* str)
//		{
//			printf("%s", str);
//			return *this;
//		}
//		ostream& operator<<(char str)
//		{
//			printf("%c", str);
//			return *this;
//		}
//		ostream& operator<<(int num)
//		{
//			printf("%d", num);
//			return *this;
//		}
//		ostream& operator<<(double e)
//		{
//			printf("%g", e);
//			return *this;
//		}
//		ostream& operator<<(ostream& (*fp)(ostream& ostm))
//		{
//			return fp(*this);
//		}
//	};
//	ostream& endl(ostream& ostm)
//	{
//		ostm << '\n';
//		fflush(stdout);
//		return ostm;
//	}
//	ostream cout;
//}


//<<,>>연산자의 오버로딩
class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	friend ostream& operator<<(ostream&, const Point&);

};


ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	/*using mystd::cout;
	using mystd::endl;
	cout <<"Simple string";
	cout << endl;
	cout << 3.14;*/
	

	////함수의 반환을 참조형으로 해서 참조값으로 다시 <<,>>opeator을 호출
	//using mystd::cout;
	//using mystd::endl;
	//cout << 3.14 << endl << 123 << endl;




	//<<,>>연산자 오버로딩
	Point pos1(1, 3);
	cout << pos1;
	Point pos2(101, 103);
	cout << pos2;
	cin >> pos3;


	return 0;
}

//
////cout, endl, 
//#include<iostream>
//
//namespace mystd
//{
//	using namespace std;
//	class ostream
//	{
//	public:
//		ostream& operator<<(char* s)
//		{
//			printf("%s", s);
//			return *this;
//		}
//		ostream& operator<<(const char* s)
//		{
//			printf("%s", s);
//			return *this;
//
//		}
//		ostream& operator<<(int num)
//		{
//			printf("%d", num);
//			return *this;
//
//		}
//		ostream& operator<<(char c)
//		{
//			printf("%c", c);
//			return *this;
//
//		}
//		ostream& operator<<(double num)
//		{
//			printf("%f", num);
//			return *this;
//
//		}
//		ostream& operator<<(ostream& (*fp)(ostream& os))
//		{
//			return 	fp(*this);
//		}
//
//	};
//	ostream& endl(ostream& os)
//	{
//		os << '\n';
//		fflush(stdout);
//		return os;
//
//	}
//	ostream cout;
//}
//
//int main(void)
//{
//	using mystd::endl;
//	using mystd::cout;
//	cout << "Simple Stirng" << endl;
//	cout << 'c' << endl;
//	cout << 5 << endl;
//
//	return 0;
//}