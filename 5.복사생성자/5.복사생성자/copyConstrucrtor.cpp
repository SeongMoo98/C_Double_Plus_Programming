#include <iostream>
using namespace std;


//복사생성자
class SoSimple
{
private :
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) :num1(n1), num2(n2)
	{

	}
	//복사생성자- 정의하지않으면 멤버 대 멤버의 복사를 진행하는 디폴트복사생성자 삽입됨
	SoSimple(SoSimple& copy)
		: num1(copy.num1), num2(copy.num2) 
	{
		cout << "Called SoSimle(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};


int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1; //=Sosimple sim2(sim1) -sim2객체 생성 후 멤버복사
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();






	return 0;
}