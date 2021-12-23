#include <iostream>
using namespace std;

////다중상속의 모호성
//class BaseOne
//{
//public:
//	void SimpleFunc()
//	{
//		cout << "BaseOne" << endl;
//	}
//};
//
//class BaseTwo
//{
//public:
//	void SImpleFunc()
//	{
//		cout << "BaseTwo" << endl;
//
//	}
//};
//
//class MultiDeriverd : public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		BaseOne::SimpleFunc();
//		BaseTwo::SImpleFunc();
//		//호출되는 함수의 이름이 같으면 모호하기 때문에 클래스의 이름 명시
//	}
//};



//가상상속
class Base
{
public :
	Base()
	{
		cout << "Base Constructor" << endl;
	}
	void SimpleFunc()
	{
		cout << "BaseOne" << endl;
	}
};

class MiddleDerivedOne :  virtual public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MIddleDerivedOne" << endl;
	}
};

class MiddleDerivedTwo :  virtual public Base
{
public :
	MiddleDerivedTwo() : Base()
	{
		cout << "MiddleDerivedTwo Constructor" << endl;
	}
	void MiddleFuncTwo()
	{
		SimpleFunc();
		cout << "MiddleDerivedTwo" << endl;
	}
};

//LaseDerived 클래스는 간접적으로 Base를 두번 상속
class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public:
	LastDerived() : MiddleDerivedOne() , MiddleDerivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};




int main(void)
{
	//다중상속
	//MultiDeriverd mdr;
	//mdr.ComplexFunc();

	//가상상속
	cout << "객체생성 전....." << endl;
	LastDerived ldr;  //Base클래스의 생성자 1번호출
	cout << "객체생성 후....." << endl;
	ldr.ComplexFunc();



	return 0;
}