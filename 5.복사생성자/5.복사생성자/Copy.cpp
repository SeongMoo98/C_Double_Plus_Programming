#include <iostream>

using namespace std;

//shallow copy 얕은 복사
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge) //왜 const고?
	{
		int len = strlen(myName) + 1;   //메모리 공간 낭비 또는 부족을 막지위해 문자열의 길이만큼 메모리를 할당
		name = new char[len]; //동적할당
		strcpy_s(name, len, myName); //myName->name 으로 문자열 copy , strcpy
		age = myAge;
	}
	void ShowPersonInfo()const
	{
		cout << "이름 :" << name << endl;
		cout << "나이 :" << age << endl;
	}

	~Person() //소멸자 - 생성자에서 할당한 메모리 공간의 소멸에 대한 코드 삽입
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};


//deep copy 깊은 복사
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge)
	{
		int len = strlen(myName) + 1;   //메모리 공간 낭비 또는 부족을 막지위해 문자열의 길이만큼 메모리를 할당
		name = new char[len]; //동적할당
		strcpy_s(name, len, myName); //myName->name 으로 문자열 copy , strcpy
		age = myAge;
	}

	//깊은 복사를 위한 복사생성자
	Person(const Person &copy) :age(copy.age)
	{
		name = new char[strlen(copy.name) + 1]; 
		strcpy_s(name, strlen(copy.name)+1, copy.name);
	}
	void ShowPersonInfo()const
	{
		cout << "이름 :" << name << endl;
		cout << "나이 :" << age << endl;
	}

	~Person() //소멸자 - 생성자에서 할당한 메모리 공간의 소멸에 대한 코드 삽입
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};


int main(void)
{	
	////shallow copy 얕은 복사 - 객체소멸이 1번이뤄짐
	//Person man1("Lee Dong Woo", 23);
	//Person man2 = man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();

	////deep copy 깊은 복사 -객체소멸이 2번 이뤄짐
	//Person man1("Lee Dong Woo", 23);
	//Person man2 = man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	return 0;
}

