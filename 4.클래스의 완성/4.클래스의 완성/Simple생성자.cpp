#include <iostream>
using namespace std;

class SimpleClass
{
private :
	int num1;
	int num2;
public:
	//생성자- 함수라서 오버로딩, 디퐅트 가능
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1,int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData()const
	{
		cout << num1 << ',' << num2 << endl;
	}
};


int main(void)
{
	SimpleClass sc1;
	SimpleClass* ptr = new SimpleClass;
	sc1.ShowData();
	ptr->ShowData();

	SimpleClass sc2(100);
	SimpleClass* ptr1 = new SimpleClass(100);
	sc2.ShowData();
	ptr1->ShowData();

	SimpleClass sc3(100,200);
	SimpleClass* ptr2 = new SimpleClass(200);
	sc3.ShowData();
	ptr2->ShowData();


}
