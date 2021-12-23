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

	//const 오버로딩
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
	const SoSimple obj2(7); //const 객체 생성

	obj1.SimpleFunc();
	obj2.SimpleFunc(); //SimpleFunc() const 호출!!

	YourFunc(obj1); //obj1을 const 참조자로 참조->SImpleFunc() const 호출!
	YourFunc(obj2);




	return 0;
}