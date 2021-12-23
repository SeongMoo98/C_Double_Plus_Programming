#include<iostream>
using namespace std;

//가상소멸자
class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
		cout << "First" << endl;
	}
	/*~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}*/
	virtual ~First() //기초클래스의 소멸자만 virtual로 선언하면 유도클래스의 소멸자들도 모두 '가상 소멸자'로 선언이 된다-> 맨아래의 유도클래스의 소멸자가 대신 호출-> 순차적으로 호출
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second :public First
{
private:
	char* strTwo;
public:
	Second(const char *str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
		cout << "Second" << endl;
	}
	~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}

};
class Third : public Second
{
private : 
	char* strThr;
public:
	Third(const char* str1, const char* str2, const char* str3) : Second(str1,str2)
	{
		strThr = new char[strlen(str3) + 1];
		cout << "Third" << endl;
	}
	~Third()
	{
		cout << "~Third()" << endl;
		delete[]strThr;
	}

};


////참조자의 참조가능성
////AAA형 참조자는 AAA객체 또는 AAA를 직접 또는 간접적으로 상속하는 모든 객체를 참조할수 있다.
//class First
//{
//public:
//	void FirstFunc() { cout << "FirstFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
//};
//
//class Second : public First
//{
//public:
//	void SecondFunc() { cout << "SecondFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
//};
//
//
//class Third : public Second
//{
//public:
//	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
//};

int main(void)
{
	
	First* ptr = new Third("simple", "complex","normal");
	delete ptr;
	cout << endl << endl;
	//second를 할당할때 second의 생성자가 first의 생성자 호출-> 실행 -> second 생성자 실행완료
	Second* sptr = new Third("simple","complex","normal");
	delete sptr;
	cout << endl << endl;

	Third* tptr = new Third("simple", "complex", "normal");
	delete tptr;
	cout << endl << endl;


	Third obj("SImple", "ComPlex","Normal");
	First& fref = obj;
	


		

	////참조자의 참조가능성 
	//Third obj;
	//obj.FirstFunc();
	//obj.SecondFunc();
	//obj.ThirdFunc();
	//obj.SimpleFunc();  //맨하위의 SimpleFunc호출

	//cout << endl << endl;


	////obj는 Second를 상속하는 Third 객체이므로 Second형 참조자로 참조가능 - 대신 참조자의 자료형을 가지고 함수의 호출가능성 판단
	//Second& sref = obj;
	//sref.FirstFunc();
	//sref.SecondFunc();
	//sref.SimpleFunc();


	//cout << endl << endl;

	//First& fref = obj;
	//fref.FirstFunc();
	//fref.SimpleFunc();



	

	return 0;
}