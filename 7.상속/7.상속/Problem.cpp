//7-1���� ��Ӱ� �������� ȣ��


////����1
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
//	//HybridCar�� �� �־���� Car�����ڴ� ����� �ȴ�
//	HybridWaterCar(int GasGauge, int ElecGauge, int WaterGauge) :HybridCar(GasGauge,ElecGauge), waterGauge(WaterGauge)
//	{
//		cout << "HybridWaterCar()" << endl;
//
//	}
//	void ShowCurrentGauge()
//	{
//		cout << "�ܿ� ���ָ� : " << GetGasGauge() << endl;
//		cout << "�ܿ� ���ⷮ : " << GetElecGauge() << endl;
//		cout << "�ܿ� ���ͷ� : " << waterGauge<< endl;
//	}
//};
//int main()
//{
//	int Gas, Elec, Water;
//	cout << "���ָ����� �ܿ� ���ᷮ�� �����ּ���!";
//	cin >> Gas;
//	cout << "\n���� ���� �ܿ� ���ᷮ�� �����ּ���!";
//	cin >> Elec;
//	cout << "\n���̺긮��������� �ܿ� ���ᷮ�� �����ּ���!";
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


////����2
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
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
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
//		cout << "�ּ� : " << addr << endl;
//		cout << "��ȭ��ȣ : " << phone << endl;
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


//���� 7-2 [IS-A ������ ���]

////����1
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
//		cout << "���� : " << width * height << endl;
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
//		cout << "���� : " << length * length << endl;
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


//����2
#include<iostream>
#include<cstring>
using namespace std;

class Book
{
private:
	char* title;	//å ����
	char* isbn;		//����ǥ�ص�����ȣ
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
		cout << "���� : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "���� : " << price << endl;
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

	char* DRMKey;	//���Ȱ���key
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
		cout << "����Ű : " << DRMKey << endl;
	}
	~EBook()
	{
		delete[]DRMKey;
	}

};


int main()
{
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl << endl;

	EBook ebook("���� C++", "555-12345-890-0", 20000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();




	return 0;
}