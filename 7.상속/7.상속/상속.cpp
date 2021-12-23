#include<iostream>
#include<cstring>
using namespace std;

//상위, 기초(base),슈퍼(super),부모 클래스
class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) :age(myage)
	{
		strcpy_s(name,sizeof(name) ,myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};
//하위, 유도(derived), 서브(sub),자식 클래스
class UnivStudent : public Person  //UnivStudent 는 Person을 상속한다
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage, const char* mymajor)
		:Person(myage, myname) // Person 클래스의 생성자로 초기화 해야함
	{
		strcpy_s(major,sizeof(major) ,mymajor);
	}
	void WhoAreYou()const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();


	return 0;
}