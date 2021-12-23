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

//�����Ҵ��� ��ü�� �Ҹ�
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
//����, ����(derived), ����(sub),�ڽ� Ŭ����
class UnivStudent : public Person  //UnivStudent �� Person�� ����Ѵ�
{
private:
	char * major;
public:
	UnivStudent(const char* myname, const char* mymajor)
		:Person(myname) // Person Ŭ������ �����ڷ� �ʱ�ȭ �ؾ���
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
	////������ �����ε��� �̿��� ��ü����
	////����Ŭ������ ��ä�������������� ����Ŭ���� �����ڰ� 100%ȣ��
	////����Ŭ������ �����ڰ� ���� ȣ��
	////����Ŭ������ ��ü�� �Ҹ�ɶ����� ����Ŭ������ �Ҹ��ڰ� ���� ����ǰ� �״��� ������������ �Ҹ��� ����
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



	//�����Ҵ��� ��ü�� �Ҹ�
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}