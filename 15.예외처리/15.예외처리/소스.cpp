#include<iostream>
using namespace std;



//���� ������
void Divide(int num1, int num2)
{
	try
	{
		if (num2 == 0)
		{
			throw "False";
		}
		cout << "�� : " << num1 / num2 << endl;
		cout << "������ : " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "first catch" << endl;
		throw; //���ܸ� �ٽ� ������
	}
}


int main(void)
{
	//���� ������
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