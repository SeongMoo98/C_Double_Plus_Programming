#include <iostream>
using namespace std;

class Base
{
private:
	int num1;
	void func1()
	{
		cout << "pritvate" << endl;
	}
protected:
	int num2;
	void func2()
	{
		cout << "protected" << endl;
	}
public:
	int num3;
	void func3()
	{
		cout << "public" << endl;
	}
	Base() : num1(1), num2(2), num3(3)
	{ }
	
};

class Derived : private Base //protected Base
{
public:
	int func()
	{
		cout << num2 << endl; // num3�� ����Ŭ���������� ���� ����
	}

};


int main(void)
{
	Derived drv;
	//cout << drv.num3 << endl;  //protected����� protected ���� ���ٹ����� ���� ������ protect�� ���� -> �ܺο��� ���ٺҰ�
	//drv.func3();
	Base base;
	base.num3





	return 0;
}