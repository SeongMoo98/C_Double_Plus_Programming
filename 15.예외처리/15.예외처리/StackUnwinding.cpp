#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


//예외의 전달
void Divide(int num1, int num2)
{
	if (num2 == 0)
	{
		throw num2;
	}
	cout << "나눗셈의 몫 : " << num1 / num2 << endl;
	cout << "나눗셈의 나머지 : " << num1 % num2 << endl;
}



////예외상황이 발생한 위치와 예외상황을 처리해야 하는 위치가 다른 경우
//int StoI(char* str)
//{
//	int len = strlen(str);
//	int num = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] < '0' || str[i]>'9')
//		{
//			throw str[i];
//		}
//		//문자열을 정수형태로 반환
//		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
//		//num = atoi(str);
//	}
//	return num;
//}


////스택풀기 - 예외가 처리되지 않아서. 함수를 호출한 영역으로 예외데이터가 전달되는 현상
//void SimpleFuncOne(void);
//void SimpleFuncTwo(void);
//void SimpleFuncThree(void);



////자료형이 일치하지 않아도 예외데이터 전달됨
////하나의 try블록에 다수의 catch
//int StoI(char* str)
//{
//	int len = strlen(str);
//	int num = 0;
//	for (int i = 0; i < len; i++)
//	{
//		//첫자리가 0
//		if (len !=0 && str[0]=='0')
//		{
//			throw 0;
//		}
//		for (int i = 0; i < len; i++)
//		{
//			if (str[i] < '0' || str[i]>'9')
//			{
//				throw str[i];
//			}
//		}
//		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
//		//num = atoi(str);
//	}
//	return num;
//}

int main(void)
{	
	//예외의 전달
	int num1, num2;
	cout << "두 개의 숫자를 입력하세요 : ";
	cin >> num1 >> num2;


	try
	{
		Divide(num1, num2); //lifo
		//예외처리의 책임도 divide로 넘어감
	 	cout << "나눗셈을 마쳤습니다" << endl;
	}
	catch(int expn)
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요." << endl;
	}



	////예외상황이 발생한 위치와 예외상황을 처리해야 하는 위치가 다른 경우
	//char str1[100];
	//char str2[200];
	//while (1)
	//{
	//	cout << "두 개의 숫자 입력 : ";
	//	cin >> str1 >> str2;

	//	try
	//	{
	//		cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
	//		break;
	//	}
	//	catch (char ch)
	//	{
	//		cout << "문자 " << ch << "가 입력되었습니다." << endl;
	//		cout << "재입력을 진행합니다." << endl;
	//	}
	//}
	//cout << "프로그램을 종료합니다." << endl;



	////스택풀기
	//try
	//{
	//	SimpleFuncOne();
	//}
	//catch (int expn)
	//{
	//	cout << "예외 코드 : " << expn << endl;
	//}



	////하나의 try에 다수의 catch
	//char str1[100];
	//char str2[200];
	//while (1)
	//{
	//	cout << "두 개의 숫자 입력 : ";
	//	cin >> str1 >> str2;

	//	try
	//	{
	//		cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
	//		break;
	//	}
	//	catch (char ch)
	//	{
	//		cout << "문자 " << ch << "가 입력되었습니다." << endl;
	//		cout << "재입력을 진행합니다." << endl;
	//	}
	//	catch (int expn)
	//	{
	//		if (expn == 0)
	//			cout << "0으로 시작하는 숫자는 입력불가." << endl;
	//		else
	//			cout << "비정상적인 입력이 이루어졌습니다." << endl;
	//		cout << "재입력 진행합니다." << endl << endl;
	//	}
	//}
	//cout << "프로그램을 종료합니다." << endl;


	return 0;
}

//스택풀기
//void SimpleFuncOne(void)
//{
//	cout << "SImpleFuncOne(void)" << endl;
//	SimpleFuncTwo();
//}
//void SimpleFuncTwo(void)
//{
//	cout << "SImpleFuncTwo(void)" << endl;
//	SimpleFuncThree();
//}
//void SimpleFuncThree(void)
//{
//	cout << "SImpleFuncThree(void)" << endl;
//	throw - 1;
//}
