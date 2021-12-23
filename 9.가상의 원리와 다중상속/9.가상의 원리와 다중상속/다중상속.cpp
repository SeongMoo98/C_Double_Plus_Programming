#include <iostream>
using namespace std;

////���߻���� ��ȣ��
//class BaseOne
//{
//public:
//	void SimpleFunc()
//	{
//		cout << "BaseOne" << endl;
//	}
//};
//
//class BaseTwo
//{
//public:
//	void SImpleFunc()
//	{
//		cout << "BaseTwo" << endl;
//
//	}
//};
//
//class MultiDeriverd : public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		BaseOne::SimpleFunc();
//		BaseTwo::SImpleFunc();
//		//ȣ��Ǵ� �Լ��� �̸��� ������ ��ȣ�ϱ� ������ Ŭ������ �̸� ���
//	}
//};



//������
class Base
{
public :
	Base()
	{
		cout << "Base Constructor" << endl;
	}
	void SimpleFunc()
	{
		cout << "BaseOne" << endl;
	}
};

class MiddleDerivedOne :  virtual public Base
{
public:
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MIddleDerivedOne" << endl;
	}
};

class MiddleDerivedTwo :  virtual public Base
{
public :
	MiddleDerivedTwo() : Base()
	{
		cout << "MiddleDerivedTwo Constructor" << endl;
	}
	void MiddleFuncTwo()
	{
		SimpleFunc();
		cout << "MiddleDerivedTwo" << endl;
	}
};

//LaseDerived Ŭ������ ���������� Base�� �ι� ���
class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public:
	LastDerived() : MiddleDerivedOne() , MiddleDerivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc();
	}
};




int main(void)
{
	//���߻��
	//MultiDeriverd mdr;
	//mdr.ComplexFunc();

	//������
	cout << "��ü���� ��....." << endl;
	LastDerived ldr;  //BaseŬ������ ������ 1��ȣ��
	cout << "��ü���� ��....." << endl;
	ldr.ComplexFunc();



	return 0;
}