#include <iostream>
#include <cstring>
using namespace std;

////�̴ϼȶ������� �̿��� ���� �� const��� �ʱ�ȭ
//class Fruit
//{
//private:
//	const int ApplePrice; //������� const ���� - const �Լ������� ȣ�� ����
//	int MangoPrice;
//	int GrapePrice;
//public:
//	Fruit(const int& Apple,const int& Mango, const int& Grape)
//		:ApplePrice(Apple), MangoPrice(Mango), GrapePrice(Grape)
//	{
//
//	}
//
//	void PrintFruitPrice() const
//	{
//		cout << "��� ���� :" << ApplePrice << endl;
//		cout << "���� ���� :" << MangoPrice << endl;
//		cout << "���� ���� :" << GrapePrice << endl;
//	}
//
//	void PriceInc(int price1, int price2) //Apple�� const�� �ٲ��� ���Ѵ�.
//	{
//		int GrapeInc = price1;
//		int MangoInc = price2;
//		GrapePrice += GrapeInc;
//		MangoPrice += MangoInc;
//	}
//};



////�̴ϼȶ������� �̿��� ������ ����
//class AAA
//{
//public:
//	AAA()
//	{
//		cout << "empty object" << endl;
//	}
//	void ShowYourName()
//	{
//		cout << "I'm class AAA" << endl;
//	}
//};
//
//class BBB
//{
//private:
//	AAA& ref; //�����ڰ� ��������� ���� ->����̴ϼȶ������� �ʱ�ȭ �ؾ���
//	const int& num;
//
//public:
//	BBB(AAA& r, const int& n)
//		:ref(r),num(n)
//	{
//
//	}
//
//	void ShowYourName()
//	{
//		ref.ShowYourName();
//		cout << "and" << endl;
//		cout << "I'm ref num " << num << endl;
//	}
//};


////private ������
//class AAA
//{
//private:
//	int num;
//public:
//	AAA():num(0){}
//	AAA& CreateInitObj(int n) const
//	{
//		AAA* ptr = new AAA(n); //�� ������ ������ ��ü�� ������ ���·� ��ȯ 
//		return *ptr;
//	}
//	void ShowNum()const { cout << num << endl; }
//private:  //privare�����ڸ� �̿��Ͽ� AAA�� ��ü�� ���� �� ��ȯ
//	AAA(int n) : num(n){}
//};


////�Ҹ���
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myName, int myAge) //�� const��?
//	{
//		int len = strlen(myName) + 1;   //�޸� ���� ���� �Ǵ� ������ �������� ���ڿ��� ���̸�ŭ �޸𸮸� �Ҵ�
//		name = new char[len]; //�����Ҵ�
//		strcpy_s(name,len,myName); //myName->name ���� ���ڿ� copy , strcpy
//		age = myAge;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "�̸� :" << name << endl;
//		cout << "���� :" << age << endl;
//	}
//
//	~Person() //�Ҹ��� - �����ڿ��� �Ҵ��� �޸� ������ �Ҹ꿡 ���� �ڵ� ����
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};


int main(void)
{
	////�̴ϼȶ������� �̿��� ���� �� const��� �ʱ�ȭ
	//Fruit tag(3000,2000,3000);
	//tag.PrintFruitPrice();

	//tag.PriceInc(3000, 2000);
	//tag.PrintFruitPrice();


	////�̴ϼȶ������� �̿��� ������ ����
	//AAA obj1;
	//BBB obj2(obj1, 20);
	//obj2.ShowYourName();


	////private ������
	//AAA base;
	//base.ShowNum();

	//AAA& obj1 = base.CreateInitObj(3);
	//obj1.ShowNum();

	//AAA& obj2 = base.CreateInitObj(12);
	//obj2.ShowNum();

	//delete& obj1;
	//delete &obj2;

	////�Ҹ���
	//Person man1("Lee Dong Woo" , 23);
	//Person man2("Jang Dong gun" , 41);
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	


	

	return 0;
}