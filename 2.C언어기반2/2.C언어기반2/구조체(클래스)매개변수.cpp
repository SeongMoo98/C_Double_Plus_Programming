#include <iostream>
using namespace std;
typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

//구조체를 매개변수로 하는 구조체 함수(잠조형)
Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	//동적할당한 Point구조체를 반환 하는데 참조형으로 반환
	return *pptr;
}
//int& ref=*ptr 과 같다 ->포인터가 가리키는 변수를 참조



int main(void)
{
	//동적할당을 해서 참조
	Point* pptr1 = new Point;
	pptr1->xpos = 3;
	pptr1->ypos = 30;

	Point* pptr2 = new Point;
	pptr2->xpos = 70;
	pptr2->ypos = 7;


	Point& pref = PntAdder(*pptr1, *pptr2);
	cout << "[" << pref.xpos << "," << pref.ypos << "]" << endl;
	delete pptr1;
	delete pptr2;
	delete& pref;


	return 0;
}