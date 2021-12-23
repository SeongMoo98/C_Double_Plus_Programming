#include <iostream>
#include <cstring>
using namespace std;

////이니셜라이저를 이용한 변수 및 const상수 초기화
//class Fruit
//{
//private:
//	const int ApplePrice; //멤버변수 const 선언 - const 함수에서만 호출 가능
//	int MangoPrice;
//	int GrapePrice;
//public:
//	Fruit(const int& Apple,const int& Mango, const int& Grape)
//		:ApplePrice(Apple), MangoPrice(Mango), GrapePrice(Grape)
//	{
//
//	}
//
//	void PrintFruitPrice() const
//	{
//		cout << "사과 가격 :" << ApplePrice << endl;
//		cout << "망고 가격 :" << MangoPrice << endl;
//		cout << "포도 가격 :" << GrapePrice << endl;
//	}
//
//	void PriceInc(int price1, int price2) //Apple은 const라 바꾸지 못한다.
//	{
//		int GrapeInc = price1;
//		int MangoInc = price2;
//		GrapePrice += GrapeInc;
//		MangoPrice += MangoInc;
//	}
//};



////이니셜라이저를 이용한 참조자 선언
//class AAA
//{
//public:
//	AAA()
//	{
//		cout << "empty object" << endl;
//	}
//	void ShowYourName()
//	{
//		cout << "I'm class AAA" << endl;
//	}
//};
//
//class BBB
//{
//private:
//	AAA& ref; //참조자가 멤버변수로 선언 ->멤버이니셜라이저로 초기화 해야함
//	const int& num;
//
//public:
//	BBB(AAA& r, const int& n)
//		:ref(r),num(n)
//	{
//
//	}
//
//	void ShowYourName()
//	{
//		ref.ShowYourName();
//		cout << "and" << endl;
//		cout << "I'm ref num " << num << endl;
//	}
//};


////private 참조자
//class AAA
//{
//private:
//	int num;
//public:
//	AAA():num(0){}
//	AAA& CreateInitObj(int n) const
//	{
//		AAA* ptr = new AAA(n); //힙 영역에 생성된 객체를 참조의 형태로 반환 
//		return *ptr;
//	}
//	void ShowNum()const { cout << num << endl; }
//private:  //privare생성자를 이용하여 AAA의 객체를 생성 및 반환
//	AAA(int n) : num(n){}
//};


////소멸자
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myName, int myAge) //왜 const고?
//	{
//		int len = strlen(myName) + 1;   //메모리 공간 낭비 또는 부족을 막지위해 문자열의 길이만큼 메모리를 할당
//		name = new char[len]; //동적할당
//		strcpy_s(name,len,myName); //myName->name 으로 문자열 copy , strcpy
//		age = myAge;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "이름 :" << name << endl;
//		cout << "나이 :" << age << endl;
//	}
//
//	~Person() //소멸자 - 생성자에서 할당한 메모리 공간의 소멸에 대한 코드 삽입
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};


int main(void)
{
	////이니셜라이저를 이용한 변수 및 const상수 초기화
	//Fruit tag(3000,2000,3000);
	//tag.PrintFruitPrice();

	//tag.PriceInc(3000, 2000);
	//tag.PrintFruitPrice();


	////이니셜라이저를 이용한 참조자 선언
	//AAA obj1;
	//BBB obj2(obj1, 20);
	//obj2.ShowYourName();


	////private 참조자
	//AAA base;
	//base.ShowNum();

	//AAA& obj1 = base.CreateInitObj(3);
	//obj1.ShowNum();

	//AAA& obj2 = base.CreateInitObj(12);
	//obj2.ShowNum();

	//delete& obj1;
	//delete &obj2;

	////소멸자
	//Person man1("Lee Dong Woo" , 23);
	//Person man2("Jang Dong gun" , 41);
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	


	

	return 0;
}