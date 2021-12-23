#include <iostream>
#include <cstring>
using namespace std;


////객체배열
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myName, int myAge)
//	{
//		int len = strlen(myName) + 1;   //메모리 공간 낭비 또는 부족을 막지위해 문자열의 길이만큼 메모리를 할당
//		name = new char[len]; //동적할당
//		strcpy_s(name,len,myName);
//		age = myAge;
//	}
//
// 
//	//객체배열을 생성지 필요한 생성자->void 생성자 매개변수 인자를 받지못함
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()"<<endl;
//	}
//
//	void SetPersonInfo(char* myName, int myAge)
//	{
//		name = myName;
//		age = myAge;;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "이름 :" << name << ",";
//		cout << "나이 :" << age << endl;
//	}
//
//	~Person() //소멸자 - 생성자에서 할당한 메모리 공간의 소멸에 대한 코드 삽입
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};


////객체 포인터 배열
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myName, int myAge)
//	{
//		int len = strlen(myName) + 1;   //메모리 공간 낭비 또는 부족을 막지위해 문자열의 길이만큼 메모리를 할당
//		name = new char[len]; //동적할당
//		strcpy_s(name,len,myName);
//		age = myAge;
//	}
//
//	//객체배열을 생성지 필요한 생성자->매개변수 인자를 받지못함
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()"<<endl;
//	}
//
//	void SetPersonInfo(char* myName, int myAge)
//	{
//		name = myName;
//		age = myAge;;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "이름 :" << name << ",";
//		cout << "나이 :" << age << endl;
//	}
//
//	~Person() //소멸자 - 생성자에서 할당한 메모리 공간의 소멸에 대한 코드 삽입
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};

//
////This 포인터
//class SoSimple
//{
//private :
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "num =" << num << ",";
//		cout << "address ="<<this << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer() //따라서 반환형도 SoSimple *형
//	{
//		return this; //이문장이 실행되는 객체의 포인터를 반환
//	}
//};

////This 포인터 이용
//class TwoNumber
//{
//private:
//	int num1;
//	int num2;
//public:
//	TwoNumber(int num1, int num2)
//	{
//		this->num1 = num1; // this->num1(멤버변수)=num1(매개변수)
//		this->num2 = num2;
//	}
//	/*TwoNumber(int num1,int num2)
//		:num1(num1),num2(num2) //멤버 이니셜라이저에서는 this포인터 사용 x
//		{
//		}
//	*/
//	void ShowTwoNumber()
//	{
//		cout << this->num1<< endl;
//		cout << this->num2<< endl;
//	}
//};


////self-reference 의 반환
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "객체 생성" << endl;
//	}
//
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;  //객체 자신을 반환
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};

int main(void)
{
	////객체배열
	//Person pArr[3]; //객체배열-배열생성시 객체가 함꼐 생성-생성자는 void 생성자
	//char namestr[100];
	//char* strptr;
	//int age;
	//int len;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "이름 :";
	//	cin >> namestr;
	//	cout << "나이 :";
	//	cin >> age;
	//	len = strlen(namestr) + 1;
	//	strptr = new char[len];
	//	strcpy_s(strptr,len, namestr);
	//	pArr[i].SetPersonInfo(strptr, age);
	//}
	//pArr[0].ShowPersonInfo();
	//pArr[1].ShowPersonInfo();
	//pArr[2].ShowPersonInfo();



	////객체 포인터 배열
	//Person* parr[3]; // 객체 포인터 배열- 객체를 저장할수있는 포인터 변수 배열 ->별도의 객체생성과정이 필요 
	//char namestr[100];
	//int age;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "이름 :";
	//	cin >> namestr;
	//	cout << "나이 :";
	//	cin >> age;
	//	parr[i] = new Person(namestr, age); // 객체생성
	//}
	//parr[0]->ShowPersonInfo();
	//parr[1]->ShowPersonInfo();
	//parr[2]->ShowPersonInfo();
	//delete parr[0];
	//delete parr[1];
	//delete parr[2];



	////This 포인터
	//SoSimple sim1(100);
	//SoSimple* ptr1 = sim1.GetThisPointer();//반환이 주소값
	//cout << ptr1 << ","; //ptr1에 저장된 주소값을 출력
	//ptr1->ShowSimpleData(); //ptr1이 가리키는 객체의 ShowSimpleData호출

	//SoSimple sim2(200);
	//SoSimple* ptr2 = sim2.GetThisPointer();
	//cout << ptr2 << ",";
	//ptr2->ShowSimpleData();



	////This 포인터 이용
	//TwoNumber two(2, 4);
	//two.ShowTwoNumber();



	////self-reference 의 반환
	//SelfRef obj(3);
	//SelfRef& ref = obj.Adder(2);

	//obj.ShowTwoNumber();
	//ref.ShowTwoNumber();

	//ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	int c;
	
	c=getchar();
	printf("sdafs");
	
	
	return 0;
}