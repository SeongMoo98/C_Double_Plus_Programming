#include <iostream>
using namespace std;

//bool형 데이터
bool IsPositive(int num)
{
	if (num < 0)
		return false;
	else
		return true;
}

//참조자와 함수
void SwapByRef(int& ref1, int& ref2);

//함수와 참조
//1.2 반환형 참조, 반환도 참조or 변수
int& RefRefFuncOne(int& ref)
{
	ref++;
	return ref;
}

//반환형이 기본자료형- 값을 임시변수에 반환 ->참조x
int RefRefFuncTwo(int& ref)
{
	ref++;
	return ref;
}



int main(void)
{
	////bool형 데이터
	//bool isPos;
	//int num;
	//cout << "InPut Number :";
	//cin >> num;

	//isPos = IsPositive(num);
	//if (isPos) // 조건문이 true이면
	//{
	//	cout << "Positive Number" << endl;
	//}
	//else
	//{
	//	cout << "Negative Number" << endl;
	//}
		

	//참조자(Reference)
	
	////배열요소를 참조 : 배열의 요소는 변수로 간주
	//int arr[3] = { 1,3,5 };
	//int& ref1 = arr[0];
	//int& ref2 = arr[1];
	//int& ref3 = arr[2];

	//cout << ref1 << endl;
	//cout << ref2 << endl;
	//cout << ref3 << endl;
	////주소가 같다
	//cout << &(arr[0]) << endl; 
	//cout << &ref1 << endl;


	////포인터 변수를 참조
	//int num = 12;
	//int* ptr = &num;
	//int** dptr = &ptr;

	//int& ref = num;
	//int* (&pref) = ptr;
	//int** (&dpref) = dptr;

	//cout << ref << endl;
	//cout << *ptr << endl;
	//cout << **dpref << endl;

	//cout << "num의 주소 :" << &num << endl;
	//cout <<"포인터 변수 ptr이 참조한 num의 주소 :"<< ptr << endl; 
	//cout << "포인터 변수 ptr의 실제 주소:" << &ptr << endl;
	//cout << "더블 포인터 변수 dptr이 참조한 ptr 주소 :"<<dptr << endl;
	//cout << "더블 포인터 변수 dptr의 실제 주소"<<&dptr << endl;

	//cout << endl;

	//cout << "num의 주소 :" << &num << endl;
	//cout << "포인터 변수 ptr의 실제 주소:" << &ptr << endl;
	//cout << "참조자 pref가 참조한 ptr의 주소 :" << &pref << endl;
	//cout << "더블 포인터 변수 dptr의 실제 주소" << &dptr << endl;
	//cout << "참조자 dpref가 참조한  dptr의  주소" << &dpref << endl;


	////참조자와 함수
	////call-by-reference
	//int val1 = 10;
	//int val2 = 20;

	//SwapByRef(val1, val2);
	//cout << "val1 :" << val1 << endl;
	//cout << "val2 :" << val2 << endl;


	////함수의 참조
	////1.반환형이 참조,반환도 참조
	//int num1 = 1;
	//int& num2 = RefRefFuncOne(num1);

	//num1++;
	//num2++;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;

	////2.반환형이 참조,반환은 변수
	//int num1 = 1;
	//int num2 = RefRefFuncOne(num1);

	//num1+=1;
	//num2 += 100;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;

	////3.반환형이 기본자료형 -> 참조를 대상으로 값을 반환
	//int num1 = 1;
	//int num2 = RefRefFuncTwo(num1);

	//num1 += 1;
	//num2 += 100;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;



	return 0;
}

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

