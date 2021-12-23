#include<iostream>
using namespace std;


////case 2 - call-by-value 함수에서 인자가 객체
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n){}
//	SoSimple(const SoSimple& copy)
//		: num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//
//	void ShowData()
//	{
//		cout << "num : " << num << endl;
//	}
//
//};
//
//void SimpleFunObj(SoSimple ob)
//{
//	ob.ShowData();
//}


////case 3
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n) {}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple &copy)" << endl;
//	}
//	SoSimple& AddNum(int n) //객체자신의 참조값을 반환
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData()
//	{
//		cout << "num :" << num << endl;
//	}
//	
//	
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "return 이전" << endl;
//	return ob;  //ob는 임시객체
//}


////임시객체의 소멸
//class Temporary
//{
//private:
//	int num;
//public:
//	Temporary(int n):num(n)
//	{
//		cout << "create Object : "<<num << endl;
//	}
//	~Temporary()
//	{
//		cout << "destroy Object :" << num << endl;
//	}
//	void ShowTempInfo()
//	{
//		cout << "My num is " << num << endl;
//	}
//};


////임시객체복사 
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "New Object : " << this << endl;
//	}
//	SoSimple(const SoSimple& copy) : num(copy.num)
//	{
//		cout << "New Copy Obj : " << this << endl;
//	}
//	~SoSimple()
//	{
//		cout << "Destroy Obj :" << this << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "Para ADR : " << &ob << endl;
//	return ob;
//}

int main(void)
{
	////case 2
	//SoSimple obj(7);
	//cout << "함수호출 전" << endl;
	//SimpleFunObj(obj); //함수에 인자를 전달하는 과정에서 복사생성자 호출
	//cout << "함수호출 후" << endl;



	////case 3
	//SoSimple obj(7);
	//SimpleFuncObj(obj).AddNum(30).ShowData(); //SimpleFunc의 객체로 AddNum호출 반환하는 참조값으로 showdata호출
	////ob는 임시객체, 임시객체를 대상으로 AddNum 함수를 호출->임시객체에 저장된 값이 30증가 
	//obj.ShowData();




	////임시객체의 소멸
	//Temporary obj(50);
	//cout << "********** after make!" << endl << endl;

	//Temporary (100); //임시객체 / Temporary obj(50)은 main이 끝날때 소멸자로 소멸함
	//cout << "********** after make!" << endl << endl;
	 
	
	////const? 참조했는데 값을 어떻게 변경할거임? 객체명이없는데
	//const Temporary& ref = Temporary(300);  //참조자에 참조되는 임시객체는 바로 소멸되지 않는다.
	//cout << "********** after make!" << endl << endl;

	//Temporary(200).ShowTempInfo();
	//cout << "********** after make!" << endl << endl;



	////임시객체복사
	//SoSimple obj(7);
	//SimpleFuncObj(obj);

	//cout << endl;
	//SoSimple tempref = SimpleFuncObj(obj);
	//cout << "Return Obj : " << &tempref << endl;
	

	
	return 0;
}