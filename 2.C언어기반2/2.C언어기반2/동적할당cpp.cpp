#include<iostream>
#include<cstring>
using namespace std;

//malloc&free
char* Malloc_MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

//new&delete
char* New_MakeStrAdr(int len)
{	
	char* str = new char[len];
	return str;
}
class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};



int main(void)
{
	////malloc&free
	//char* str = Malloc_MakeStrAdr(20);
	//strcpy_s(str,20,"I AM SO HAPPY~");
	//cout << str << endl;
	//free(str);



	////new&delete
	////포인터를 사용하지 않고 힙에 접근-C에서는 반드시 포인터를 사용해야함
	//int* ptr = new int;
	//int& ref = *ptr; //힙 영역에 할당된 변수에 참조자 선언
	//ref = 20;
	//cout << *ptr << endl;
	//delete(ptr);

	//char* str = New_MakeStrAdr(20);
	//strcpy_s(str,20,"I AM SO HAPPY~");
	//cout << str << endl;
	//delete[]str;





	////객체생성시 반드시 new&delete
	//cout << "case 1 : ";
	//Simple* sp1 = new Simple;
	//cout << "case 2 : ";
	//Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); //malloc free는 반드시 포인터 사용

	//cout << endl << "end of main" << endl;
	//delete sp1;
	//free(sp2);
}
