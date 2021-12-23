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

////���Կ����ڵ� ���������ó�� ���������� �������� �ִ�
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
//		delete []name;//�޸� ������ �������� �޸� ��ü����
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
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};




////��Ӱ���
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
//	//����Ŭ������ ���� ������ ���
//	Second & operator=(const Second & ref)
//	{
//		cout << "Second& operator=()" << endl;
//		First::operator=(ref); //AAA�� �������� AAA��ü �Ǵ� AAA�� ������������ ����ϴ� ��� ��ü�� ������ �� �ִ�.
//		num3 = ref.num4;
//		num4 = ref.num4;
//		return *this;
//	}
//};


////�̴ϼȶ������� �̿��� ���Կ���
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
	////����Ʈ ���Կ����� ����
	//fcpy = fsrc;
	////�����ε��� ���Կ�����
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






	////��������->��������
	//Person man1("Lee dong woo", 29);
	//Person man2("Yoon ji yul", 22);
	//man2=man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	
	
	////��ӱ��������� ���Կ����� ȣ��
	////�ּ�ó����-����Ŭ������ ���Ե� ����Ʈ ���Կ����ڰ� ����Ŭ������ ���� ������ ȣ��
	//Second ssrc(111, 222, 333, 444);
	//Second scpy(0, 0, 0, 0);
	//scpy = ssrc;
	//scpy.Showdata();

	////�ּ���ü�ϸ� ����Ŭ������ ���Կ����ڰ� ȣ��-> �����ڰ� �ƴ϶󼭼� ����Ŭ�������� ����x
	////=>����Ŭ������ ���Կ����� ���ǿ��� ��������� ����Ŭ������ ���� ������ ȣ�⹮�� �������������� ����Ŭ������ ���Կ����� ȣ��x
	////=>����Ŭ������ ���� ������ ȣ���� ����ؾ��Ѵ�
	

	////�̴ϼȶ�����
	//AAA obj1(12);
	//cout << "*****************************************" << endl;
	//BBB obj2(obj1);
	//cout << "*****************************************" << endl;
	//CCC obj3(obj1);


	return 0;
}