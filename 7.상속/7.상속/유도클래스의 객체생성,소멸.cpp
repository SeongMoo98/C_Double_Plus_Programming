#include<iostream>
#include<cstring>
using namespace std;

//class SoBase
//{
//private:
//	int baseNum;
//public:
//	SoBase() :baseNum(20)
//	{
//		cout << "SoBase()" << endl;
//	}
//	SoBase(int n) :baseNum(n)
//	{
//		cout << "SoBase(int n)" << endl;
//	}
//	void ShowBaseData()
//	{
//		cout << baseNum << endl;
//	}
//	~SoBase()
//	{
//		cout << "~SoBase() : " << baseNum << endl;
//	}
//};
//
//class SoDerived :public SoBase
//{
//private:
//	int derivNum;
//public:
//	SoDerived() :derivNum(30)
//	{
//		cout << "SoDerived()" << endl;
//	}
//	SoDerived(int n) :derivNum(n)
//	{
//		cout << "SoDerived(int n)" << endl;
//	}
//	SoDerived(int n1, int n2) :SoBase(n1), derivNum(n2)
//	{
//		cout << "SoDerived(int n1,int n2)" << endl;
//	}
//	void ShowDerivData()
//	{
//		ShowBaseData();
//		cout << derivNum << endl;
//	}
//
//	~SoDerived()
//	{
//		cout << "~SoDerived() : "<<derivNum << endl;
//	}
//
//};

//동적할당한 객체의 소멸
class Person
{
private:
	char * name;
public:
	Person(const char * myname)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name,len, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	
	~Person()
	{
		delete[]name;
	}
};
//하위, 유도(derived), 서브(sub),자식 클래스
class UnivStudent : public Person  //UnivStudent 는 Person을 상속한다
{
private:
	char * major;
public:
	UnivStudent(const char* myname, const char* mymajor)
		:Person(myname) // Person 클래스의 생성자로 초기화 해야함
	{
		int len = strlen(mymajor) + 1;
		major = new char[len];
		strcpy_s(major, len, mymajor);
	}
	void WhoAreYou()const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}

	~UnivStudent()
	{
		delete []major;
	}
};

int main(void)
{
	////생성자 오버로딩을 이용한 객체생성
	////유도클래스의 객채생성과정에서는 기초클래스 생성자가 100%호출
	////기초클래스의 생성자가 먼저 호출
	////유도클래스의 객체가 소멸될때에는 유도클래스의 소멸자가 먼저 실행되고 그다음 기초츨래스의 소멸자 실행
	//cout << "case1....." << endl;
	//SoDerived dr1;
	//dr1.ShowDerivData();
	//cout << "-----------------------" << endl;

	//cout << "case2....." << endl;
	//SoDerived dr2(12);
	//dr2.ShowDerivData();
	//cout << "-----------------------" << endl;

	//cout << "case3....." << endl;
	//SoDerived dr3(23, 24);
	//dr3.ShowDerivData();
	//cout << "-----------------------" << endl;



	//동적할당한 객체의 소멸
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}