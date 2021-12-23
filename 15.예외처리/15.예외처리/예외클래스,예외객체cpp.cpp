#include<iostream>
#include<cstring>
#include<new>
using namespace std;

////예외클래스
//class DepositException
//{
//private:
//	int reqDep;
//public:
//	DepositException(int money) :reqDep(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ 예외 메세지 : " << reqDep << " 는 입금불가]" << endl;
//	}
//};
////예외클래스
//class WithdrawException
//{
//private:
//	int balance;
//public:
//	WithdrawException(int money) : balance(money)
//	{ }
//	void ShowExceptionReason()
//	{
//		cout << "[ 예외 메세지 : 잔액 " << balance << ", 잔액부족]" << endl;
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
//	void Deposit(int money) throw (DepositException) //예외의 명시
//	{
//		if (money < 0)
//		{
//			//예외객체
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
//		cout << "잔고 : " << balance << endl;
//	}
//};



////상속관계에 있는 예외 클래스
//class AccountException
//{
//public:
//	//순수 가상함수
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
//		cout << "[ 예외 메세지 : " << reqDep << " 는 입금불가]" << endl;
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
//		cout << "[ 예외 메세지 : 잔액 " << balance << ", 잔액부족]" << endl;
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
//	void Deposit(int money) throw (AccountException) //예외의 명시
//	{
//		if (money < 0)
//		{
//			//예외객체
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
//		cout << "잔고 : " << balance << endl;
//	}
//};



////예외 전달시 주의사항
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



//예외 던지기
void Divide(int num1, int num2)
{
	try
	{
		if (num2 == 0)
		{
			throw 0;
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



	////상속관계에 있는 예외처리
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




	////예외처리시 주의사항(상속시에)
	//try
	//{
	//	//ExceptionGenerator(3);
	//	ExceptionGenerator(2);
	//	//ExceptionGenerator(1);
	//}
	////BBB, CCC가 AAA를 상속받아서 모두 AAA객체로 간주 -> 처음에 잡힌다
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



	////new연산자에 의해서 발생하는 예외 - 메모리 공간 할당 실패
	//int num = 0;
	//try
	//{
	//	while (1)
	//	{
	//		num++;
	//		cout << num << "번째 할당 시도 " << endl;
	//		new int[10000][10000];
	//	}
	//}
	////bad allocation을 확인하기 위한 블록
	//catch (bad_alloc& bad)
	//{
	//	cout << bad.what() << endl; //what은 예외의 원인정보를 문자열 형태로 반환
	//	cout << "더 이상 할당 불가!" << endl;
	//}



	//예외 던지기
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