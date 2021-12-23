#include<iostream>
using namespace std;



//예외 던지기
void Divide(int num1, int num2)
{
	try
	{
		if (num2 == 0)
		{
			throw "False";
		}
		cout << "몫 : " << num1 / num2 << endl;
		cout << "나머지 : " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "first catch" << endl;
		throw; //예외를 다시 던진다
	}
}


int main(void)
{
	//예외 던지기
	try
	{
		Divide(9, 2);
		Divide(4, 0);

	}
	catch (const char* expn)
	{
		cout << expn << endl;
		cout << "second catch" << endl;
	}



	return 0;
}