#include<iostream>
#include<cstring>
using namespace std;

//����, ����(base),����(super),�θ� Ŭ����
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
//����, ����(derived), ����(sub),�ڽ� Ŭ����
class UnivStudent : public Person  //UnivStudent �� Person�� ����Ѵ�
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage, const char* mymajor)
		:Person(myage, myname) // Person Ŭ������ �����ڷ� �ʱ�ȭ �ؾ���
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