#include<iostream>
using namespace std;

////전위증감
////멤버함수 - pos.operator++();
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << "," << ypos << ']' << endl;
//	}
//
//	//왜 참조형
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point& operator--(Point& ref);
//};
////전역함수 - operator--(pos);
//Point& operator--(Point& ref)
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}


//후위증감
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
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}	

	//후위증가
	Point& operator++(int)  //int는 후위증감연산자 오버로딩을 나타내는 방법- 아무뜻이 없다 그냥 명시
	{	
		Point retobj(xpos, ypos);   //const Point retobj(*this)
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend Point operator--(Point&, int);
};

//전역함수 - operator--(pos);
Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}
//후위감소
Point operator--(Point &ref,int)
{
	Point retobj(ref);   
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}
int main(void)
{
	/*Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();*/
	


	//후위증감
	Point pos(3, 5);
	Point cpy;
	cpy=pos--;
	
	cpy.ShowPosition();
	pos.ShowPosition();
	

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}