#include<iostream>
#include<cstring>
#include<new>
using namespace std;

////����Ŭ����
//class DepositException
//{
//private:
//	int reqDep;
//public:
//	DepositException(int money) :reqDep(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ ���� �޼��� : " << reqDep << " �� �ԱݺҰ�]" << endl;
//	}
//};
////����Ŭ����
//class WithdrawException
//{
//private:
//	int balance;
//public:
//	WithdrawException(int money) : balance(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ ���� �޼��� : �ܾ� " << balance << ", �ܾ׺���]" << endl;
//	}
//};
//class Account
//{
//private:
//	char accNum[50];
//	int balance;
//public:
//	Account(const char* acc, int money) :balance(money)
//	{
//		strcpy_s(accNum, 50, acc);
//
//	}
//	void Deposit(int money) throw (DepositException) //������ ���
//	{
//		if (money < 0)
//		{
//			//���ܰ�ü
//			DepositException expn(money);
//			throw expn;
//		}
//		balance += money;
//	}
//	void Withdraw(int money) throw (WithdrawException)
//	{
//		if (money > balance)
//		{
//			throw WithdrawException(balance);
//		}
//		balance -= money;
//	}
//	void ShowMyMoney()
//	{
//		cout << "�ܰ� : " << balance << endl;
//	}
//};



////��Ӱ��迡 �ִ� ���� Ŭ����
//class AccountException
//{
//public:
//	//���� �����Լ�
//	virtual void ShowExceptionReason() = 0;
//};
//class DepositException : public AccountException
//{
//private:
//	int reqDep;
//public:
//	DepositException(int money) :reqDep(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ ���� �޼��� : " << reqDep << " �� �ԱݺҰ�]" << endl;
//	}
//};
//class WithdrawException : public AccountException
//{
//private:
//	int balance;
//public:
//	WithdrawException(int money) : balance(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ ���� �޼��� : �ܾ� " << balance << ", �ܾ׺���]" << endl;
//	}
//};
//class Account
//{
//private:
//	char accNum[50];
//	int balance;
//public:
//	Account(const char* acc, int money) :balance(money)
//	{
//		strcpy_s(accNum, 50, acc);
//
//	}
//	void Deposit(int money) throw (AccountException) //������ ���
//	{
//		if (money < 0)
//		{
//			//���ܰ�ü
//			DepositException expn(money);
//			throw expn;
//		}
//		balance += money;
//	}
//	void Withdraw(int money) throw (AccountException)
//	{
//		if (money > balance)
//		{
//			throw WithdrawException(balance);
//		}
//		balance -= money;
//	}
//	void ShowMyMoney()
//	{
//		cout << "�ܰ� : " << balance << endl;
//	}
//};



////���� ���޽� ���ǻ���
//class AAA
//{
//public:
//	void ShowYou()
//	{
//		cout << "AAA Exception!" << endl;
//	}
//};
//
//class BBB : public AAA
//{
//public:
//	void ShowYou()
//	{
//		cout << "BBB Exception!" << endl;
//	}
//};
//
//class CCC : public BBB
//{
//public:
//	void ShowYou()
//	{
//		cout << "CCC Exception!" << endl;
//	}
//};
//
//void ExceptionGenerator(int expn)
//{
//	if (expn == 1)
//		throw AAA();
//	else if (expn == 2)
//		throw BBB();
//	else
//		throw CCC();	
//}



//���� ������
void Divide(int num1, int num2)
{
	try
	{
		if (num2 == 0)
		{
			throw 0;
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
	/*Account myAcc("56789-827120", 5000);

	try
	{
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch (DepositException& expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();

	try
	{
		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);
	}
	catch (WithdrawException& expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();*/



	////��Ӱ��迡 �ִ� ����ó��
	//Account myAcc("56789-827120", 5000);
	//try
	//{
	//	myAcc.Deposit(2000);
	//	myAcc.Deposit(-300);
	//}
	//catch (AccountException& expn)
	//{
	//	expn.ShowExceptionReason();
	//}
	//myAcc.ShowMyMoney();

	//try
	//{
	//	myAcc.Withdraw(3500);
	//	myAcc.Withdraw(4500);
	//}
	//catch (AccountException& expn)
	//{
	//	expn.ShowExceptionReason();
	//}
	//myAcc.ShowMyMoney();




	////����ó���� ���ǻ���(��ӽÿ�)
	//try
	//{
	//	//ExceptionGenerator(3);
	//	ExceptionGenerator(2);
	//	//ExceptionGenerator(1);
	//}
	////BBB, CCC�� AAA�� ��ӹ޾Ƽ� ��� AAA��ü�� ���� -> ó���� ������
	///*catch(AAA& expn)
	//{
	//	cout << "catch(AAA& expn)" << endl;
	//	expn.ShowYou();
	//}
	//catch (BBB& expn)
	//{
	//	cout << "catch(BBB& expn)" << endl;
	//	expn.ShowYou();
	//}
	//catch (CCC& expn)
	//{
	//	cout << "catch(CCC& expn)" << endl;
	//	expn.ShowYou();
	//}*/

	//catch(CCC& expn)
	//{
	//	cout << "catch(AAA& expn)" << endl;
	//	expn.ShowYou();
	//}
	//catch (BBB& expn)
	//{
	//	cout << "catch(BBB& expn)" << endl;
	//	expn.ShowYou();
	//}
	//catch (AAA& expn)
	//{
	//	cout << "catch(AAA& expn)" << endl;
	//	expn.ShowYou();
	//}



	////new�����ڿ� ���ؼ� �߻��ϴ� ���� - �޸� ���� �Ҵ� ����
	//int num = 0;
	//try
	//{
	//	while (1)
	//	{
	//		num++;
	//		cout << num << "��° �Ҵ� �õ� " << endl;
	//		new int[10000][10000];
	//	}
	//}
	////bad allocation�� Ȯ���ϱ� ���� ���
	//catch (bad_alloc& bad)
	//{
	//	cout << bad.what() << endl; //what�� ������ ���������� ���ڿ� ���·� ��ȯ
	//	cout << "�� �̻� �Ҵ� �Ұ�!" << endl;
	//}



	//���� ������
	try
	{
		Divide(9, 2);
		Divide(4, 0);

	}
	catch (int expn)
	{
		cout << "second catch" << endl;
	}

	return 0;
}