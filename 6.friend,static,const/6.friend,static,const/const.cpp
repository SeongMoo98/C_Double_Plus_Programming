#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n){}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	//const �����ε�
	void SimpleFunc()
	{
		cout << "SImpleFunc : " << num << endl;
	}

	void SimpleFunc() const
	{
		cout << "const SimpleFunc : " << num << endl;
	}
};


void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7); //const ��ü ����

	obj1.SimpleFunc();
	obj2.SimpleFunc(); //SimpleFunc() const ȣ��!!

	YourFunc(obj1); //obj1�� const �����ڷ� ����->SImpleFunc() const ȣ��!
	YourFunc(obj2);




	return 0;
}