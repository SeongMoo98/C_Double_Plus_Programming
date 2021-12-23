//7-1문제 상속과 생성자의 호출


////문제1
//#include<iostream>
//using namespace std;
//
//class Car
//{
//private:
//	int gasolineGauge;
//public:
//	Car(int GasGauge) : gasolineGauge(GasGauge)
//	{
//		cout << "Car(int)" << endl;
//	}
//	int GetGasGauge() 
//	{
//		return gasolineGauge;
//	}
//};
//
//class HybridCar :public Car
//{
//private:
//	int electricGauge;
//public:
//	HybridCar(int GasGauge, int ElecGauge) : Car(GasGauge), electricGauge(ElecGauge)
//	{
//		cout << "HybridCar()" << endl;
//	}
//	int GetElecGauge()
//	{
//		return electricGauge;
//	}
//};
//
//class HybridWaterCar : public HybridCar
//{
//private:
//	int waterGauge;
//public:
//	//HybridCar에 다 넣어야함 Car생성자는 안적어도 된다
//	HybridWaterCar(int GasGauge, int ElecGauge, int WaterGauge) :HybridCar(GasGauge,ElecGauge), waterGauge(WaterGauge)
//	{
//		cout << "HybridWaterCar()" << endl;
//
//	}
//	void ShowCurrentGauge()
//	{
//		cout << "잔여 가솔린 : " << GetGasGauge() << endl;
//		cout << "잔여 전기량 : " << GetElecGauge() << endl;
//		cout << "잔여 워터량 : " << waterGauge<< endl;
//	}
//};
//int main()
//{
//	int Gas, Elec, Water;
//	cout << "가솔린차의 잔여 연료량을 적어주세요!";
//	cin >> Gas;
//	cout << "\n전기 차의 잔여 연료량을 적어주세요!";
//	cin >> Elec;
//	cout << "\n하이브리드워터차의 잔여 연료량을 적어주세요!";
//	cin >> Water;
//
//	Car Car(Gas);
//	HybridCar Hybrid(Gas, Elec);
//	HybridWaterCar HybridWater(Gas, Elec, Water);
//
//	HybridWater.ShowCurrentGauge();
//
//	return 0;
//}


//***************************************************************************************************************************************


////문제2
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//class MyFriendInfo
//{
//private:
//	char* name;
//	int age;
//public:
//	MyFriendInfo(const char* F_name, int F_age) :  age(F_age)
//	{
//		cout << "Info" << endl<<endl;
//		int len = strlen(F_name) + 1;
//		name = new char[len];
//		strcpy_s(name, len, F_name);
//	}
//	void ShowMyFriendInfo()
//	{
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//	~MyFriendInfo()
//	{
//		cout << "Delete Info"<<endl << endl;
//
//		delete[]name;
//	}
//};
//class MyFriendDetailInfo :public MyFriendInfo
//{
//private:
//	char* addr;
//	char* phone;
//public:
//	MyFriendDetailInfo(const char* F_name, int F_age, const char* F_addr, const char* F_phone) :MyFriendInfo(F_name, F_age)
//	{
//		cout << "Detail Info" << endl<<endl;
//		int Addr_len = strlen(F_addr) + 1;
//		int Phone_len = strlen(F_phone) + 1;
//		addr = new char[Addr_len];
//		phone = new char[Phone_len];
//		strcpy_s(addr, Addr_len, F_addr);
//		strcpy_s(phone, Phone_len, F_phone);
//
//	}
//	void ShowMyFriendDetailInfo()
//	{
//		ShowMyFriendInfo();
//		cout << "주소 : " << addr << endl;
//		cout << "전화번호 : " << phone << endl;
//	}
//	~MyFriendDetailInfo()
//	{
//		cout << "Delete Detail Info" << endl<<endl;
//		delete[]addr;
//		delete[]phone;
//	}
//};
//
//
//int main(void)
//{
//	MyFriendDetailInfo FriedInfo("Kim Chul Soo", 24, "Geoje", "010-5534-1451");
//	FriedInfo.ShowMyFriendDetailInfo();
//	return 0;
//}


//***************************************************************************************************************************************


//문제 7-2 [IS-A 관계의 상속]

////문제1
//#include<iostream>
//using namespace std;
//
//class Rectangle
//{
//private:
//	int width, height;
//
//public:
//	Rectangle(int Wei, int Hei) : width(Wei), height(Hei)
//	{
//
//	}
//	void ShowAreaInfo()
//	{
//		cout << "면적 : " << width * height << endl;
//	}
//};
//
//class Square : public Rectangle
//{
//private:
//	int length;
//public:
//	Square(int Len) :Rectangle(Len, Len), length(Len)
//	{
//
//	}
//	void ShowAreaInfo()
//	{
//		cout << "면적 : " << length * length << endl;
//	}
//};
//int main()
//{
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//}


//***************************************************************************************************************************************


//문제2
#include<iostream>
#include<cstring>
using namespace std;

class Book
{
private:
	char* title;	//책 제목
	char* isbn;		//국제표준도서번호
	int price;
public:
	Book(const char* B_title, const char* B_isbn, int B_price) : price(B_price)
	{
		//this->title = new char[strlen(title) + 1];
		int Title_len = strlen(B_title) + 1;
		int ISBN_len = strlen(B_isbn) + 1;
		title = new char[Title_len];
		isbn = new char[ISBN_len];
		strcpy_s(title, Title_len, B_title);
		strcpy_s(isbn, ISBN_len, B_isbn);
	}
	void ShowBookInfo()
	{
		cout << "제목 : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "가격 : " << price << endl;
	}
	~Book()
	{
		delete[]title;
		delete[]isbn;
	}


};



class EBook : public Book
{
private:

	char* DRMKey;	//보안관련key
public:
	EBook(const char* B_title, const char* B_isbn, int B_price, const char* EB_DRMKey) : Book(B_title, B_isbn, B_price)
	{
		int Key_len = strlen(EB_DRMKey) + 1;
		DRMKey = new char[Key_len];
		strcpy_s(DRMKey, Key_len, EB_DRMKey);
	}

	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키 : " << DRMKey << endl;
	}
	~EBook()
	{
		delete[]DRMKey;
	}

};


int main()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl << endl;

	EBook ebook("좋은 C++", "555-12345-890-0", 20000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();




	return 0;
}