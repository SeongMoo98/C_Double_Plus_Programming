#include <iostream>
using namespace std;

//함수오버로딩
void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a, int b);

//디폴트값 설정
int BoxVolume(int length, int width = 1, int height = 1);

//인라인함수
inline int SQUARE(int x)
{
	return x * x;
}

//이름공간선언
namespace BestComImpl
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}
namespace ProgComImpl
{
	void SimpleFunc(void);
}


int main()
{
	//
	////printf 
	//int num = 20;
	//std::cout << "Hello World"  << std::endl;   //std :: cout= printf, std :: endl : 개행(\n)
	//std::cout << num << ' ' << 'A' << std::endl;
	

	////scanf
	//int val1;
	//std::cout << "첫번째 숫자 입력 :";
	//std::cin >> val1;
	//int val2;
	//std::cout << "두번째 숫자 입력 :";
	//std::cin >> val2;
	//int result = val1 + val2; // C++은 변수의 선언위치에 제한을 두지 않는다
	//std::cout << "덧셈 결과 : " << result << std::endl;


	////변수의 선언 : 선언위치에 구애받지 않는다
	//int val1, val2;
	//int result = 0;
	//std::cout << "두개의 숫자입력 :";
	//std::cin >> val1 >> val2; //연이은 데이터의 입력을 명령가능
	//if (val1< val2)
	//{
	//	for (int i = val1 + 1; i < val2; i++)
	//	{
	//		result += i;
	//	}
	//}
	//else
	//{
	//	for (int i = val2 + 1; i < val1; i++)
	//	{
	//		result += i;
	//	}
	//}
	//std::cout << "두 수 사이의 정수 합 :" << result << std::endl;


	////배열 기반의 문자열 입출력
	//char name[100];
	//char lang[200];
	//
	//std::cout << "이름은 무엇입니까?";
	//std::cin >> name;
	//
	//std::cout << "좋아하는 프로그래밍 언어는 무엇입니까?";
	//std::cin >> lang;

	//std::cout << "내 이름은 " << name << "입니다." << std::endl;
	//std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;


	////함수 오버로딩
	//MyFunc();
	//MyFunc('a');
	//MyFunc(3, 5);


	////함수의 defalut 값
	//cout << "[3,3,3]" << BoxVolume(3, 3, 3) << endl;
	//cout << "[5,5,D]" << BoxVolume(5, 5) << endl;
	//cout << "[7,D,D]" << BoxVolume(7) << endl;
	////cout << "[D,D,D]" << BoxVolume() << endl; //인자 1개를 전달해줘야함 


	////inline 함수
	//cout<<SQUARE(5) << endl;
	//cout<<SQUARE(3.14) << endl;  //int 자료형으로 변환이 일어난다.


	////이름공간
	//BestComImpl::SimpleFunc(); // ::->범위지정연산자
	//ProgComImpl::SimpleFunc();


	return 0;
}



//함수오버로딩
void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

//함수ㅢ defalut 값
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}


//이름공간정의
void BestComImpl ::SimpleFunc(void)
{
		cout << "BestCom이 정의한 함수" << endl;
		PrettyFunc(); //동일한 이름공간에 정의된 함수를 호출할 때에는 이름공간 명시할 필요x
		ProgComImpl::SimpleFunc();
}

void ProgComImpl :: SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}

void BestComImpl::PrettyFunc(void)
{
	cout << "So Pretty!" << endl;
}














