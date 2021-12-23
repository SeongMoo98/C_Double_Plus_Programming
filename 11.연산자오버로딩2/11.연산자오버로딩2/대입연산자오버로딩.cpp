#include <iostream>
#include <cstring>
using namespace std;

class First
{
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
	{

	}
	void Showdata()
	{
		cout << num1 << "," << num2 << endl;
	}
};


class Second
{
private:
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4)
	{

	}
	void Showdata()
	{
		cout << num3 << "," << num4 << endl;
	}

	Second& operator=(const Second& ref)
	{
		cout << "Second& operator=()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
};

////대입연산자도 복사생성자처러 얕은복사의 문제점이 있다
//class Person
//{
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len,myname);
//		age = myage;
//	}
//	
//	Person& operator=(const Person& ref)
//	{
//		delete []name;//메모리 누수를 막기위한 메모리 해체과정
//
//		int len=strlen(ref.name)+1;
//		name= new char[len];
//		strcpy_s(name, len,ref.name);
//		age=ref.age;
//		return *this;
//	}
//	
//
//	void ShowPersonInfo() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};




////상속관계
//class First
//{
//private:
//	int num1, num2;
//public:
//	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
//	{
//
//	}
//	void Showdata()
//	{
//		cout << num1 << "," << num2 << endl;
//	}
//
//	First& operator=(const First& ref)
//	{
//		cout << "First& operator()" << endl;
//		num1 = ref.num1;
//		num2 = ref.num2;
//		return *this;
//	}
//};
//
//class Second : public First
//{
//private : 
//	int num3, num4;
//public:
//	Second(int n1, int n2, int n3, int n4) :First(n1, n2), num3(n3), num4(n4)
//	{
//
//	}
//	void Showdata()
//	{
//		First::Showdata();
//		cout << num3 << "," << num4 << endl;
//	}
//
//	
//	/*Second & operator=(const Second & ref)
//	{
//		cout << "Second& operator=()" << endl;
//		num3 = ref.num4;
//		num4 = ref.num4;
//		return *this;
//	}*/
//
//	//기초클래스의 대입 연산자 명시
//	Second & operator=(const Second & ref)
//	{
//		cout << "Second& operator=()" << endl;
//		First::operator=(ref); //AAA형 참조차는 AAA객체 또는 AAA를 직간접적으로 상속하는 모든 객체를 참조할 수 있다.
//		num3 = ref.num4;
//		num4 = ref.num4;
//		return *this;
//	}
//};


////이니셜라이저를 이용한 대입연산
//class AAA
//{
//private:
//	int num;
//public:
//	AAA(int n = 0) :num(n)
//	{
//		cout << "AAA(int n=0)" << endl;
//	}
//	AAA(const AAA& ref) :num(ref.num)
//	{
//		cout << "AAA(const AAA& ref)" << endl;
//	}
//	AAA& operator=(const AAA& ref)
//	{
//		num = ref.num;
//		cout << "operator=(const AAA& ref)" << endl;
//		return *this;
//	}
//};
//
//class BBB
//{
//private:
//	AAA mem;
//public:
//	BBB(const AAA& ref) : mem(ref)
//	{
//
//	}
//
//};
//
//class CCC
//{
//private:
//	AAA mem;
//public:
//	CCC(const AAA& ref)
//	{
//		mem = ref;
//	}
//};



int main(void)
{
	//First fsrc(111, 222);
	//First fcpy;
	//Second ssrc(333, 444);
	//Second scpy;
	//
	////디폴트 대입연산자 생성
	//fcpy = fsrc;
	////오버로딩된 대입연산자
	//scpy = ssrc;
	//fcpy.Showdata();
	//ssrc.Showdata();

	//First fob1, fob2;
	//Second sob1, sob2;

	//fob1 = fob2 = fsrc;
	//sob1 = sob2 = ssrc;

	//fob1.Showdata();
	//fob2.Showdata();
	//sob1.Showdata();
	//sob2.Showdata();






	////얕은복사->깊은복사
	//Person man1("Lee dong woo", 29);
	//Person man2("Yoon ji yul", 22);
	//man2=man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	
	
	////상속구조에서의 대입연산자 호출
	////주석처리시-유도클래스에 삽입된 디폴트 대입연산자가 기초클래스의 대입 연산자 호출
	//Second ssrc(111, 222, 333, 444);
	//Second scpy(0, 0, 0, 0);
	//scpy = ssrc;
	//scpy.Showdata();

	////주석해체하면 유도클래스의 대입연산자가 호출-> 생성자가 아니라서서 기초클래스에는 대입x
	////=>유도클래스의 대입연산자 정의에서 명시적으로 기초클래스의 대입 연산자 호출문을 삽입하지않으면 기초클래스의 대입연산자 호출x
	////=>기초클래스의 대입 연산자 호출을 명시해야한다
	

	////이니셜라이저
	//AAA obj1(12);
	//cout << "*****************************************" << endl;
	//BBB obj2(obj1);
	//cout << "*****************************************" << endl;
	//CCC obj3(obj1);


	return 0;
}