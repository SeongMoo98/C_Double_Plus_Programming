#include<iostream>
using namespace std;

//class SoSimple
//{
////private로 해야하는데 main의 1행에서 static변수의 성질을 보여줄려고 public으로 선언
//public:
//	static int simObjCnt;
//public:
//	SoSimple()
//	{
//		simObjCnt++; //멤버함수내에서 멤버변수처럼 사용가능
//		cout << simObjCnt << "번째 SoSimple 객체" << endl;
//	}
//};
//int SoSimple::simObjCnt = 0;



////static 멤버 함수
//class SoSimple
//{
//private :
//	int num1;
//public:
//	static int num2; //숫자를 입력받기위해 public
//	SoSimple(int n) : num1(n) {}
//	static void Adder(int n)
//	{
//		//num1 += n;  - static 멤버함수는 멤버변수에 접근 x
//		num2 += n;
//	}
//	void ShowData()
//	{
//		cout << num1 << "," << num2 << endl;
//	}
//};
//int SoSimple::num2 = 0;



//const static 멤버
//class CountruArea
//{
//public:
//	const static int RUSSIA		 = 1707540;
//	const static int CANADA		 = 998467;
//	const static int CHINA		 = 957290;
//	const static int SOUTH_kOREA = 9922;
//};



////mutable
//class SoSimple
//{
//private:
//	int num1;
//	mutable int num2;
//public:
//	SoSimple(int n1, int n2) : num1(n1), num2(n2) {}
//	void ShowSimpleData() const
//	{
//		cout << num1 << ", "<<num2 << endl;
//	}
//
//	//mutable 키워드로 const 함수내에서 값 변경 가능
//	void CopyToNum2() const
//	{
//		num2 = num1; 
//	}
//};



int main(void)
{
	//cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl; //simObjCnt=0
	//SoSimple sim1; //simObjCnt=1
	//SoSimple sim2; //simObjCnt=2

	//cout << SoSimple::simObjCnt << "번쨰 SoSimple 객체" << endl; //simObjCnt=2

	////sim1 과 sim2의 멤버변수처럼 접근하는 것처럼 보인다
	//cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl; //simObjCnt=2
	//cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl; //simObjCnt=2


	////static 멤버함수
	//SoSimple sim1(5);
	//int num;
	//cout << "숫자를 입력하세요 : ";
	//cin >> num;
	//sim1.Adder(num);
	//sim1.ShowData();


	////const static 멤버
	//cout << "러시아 면적 : " << CountruArea::RUSSIA << "km^2" << endl;
	//cout << "캐나다 면적 : " << CountruArea::CANADA << "km^2" << endl;
	//cout << "중국 면적 : " << CountruArea::CHINA << "km^2" << endl;
	//cout << "한국 면적 : " << CountruArea::SOUTH_kOREA << "km^2" << endl;


	////mutable
	//SoSimple sim1(5,9);
	//sim1.ShowSimpleData();
	//sim1.CopyToNum2();
	//sim1.ShowSimpleData();


	return 0;
}