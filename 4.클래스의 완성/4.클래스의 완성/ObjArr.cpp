#include <iostream>
#include <cstring>
using namespace std;


////��ü�迭
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myName, int myAge)
//	{
//		int len = strlen(myName) + 1;   //�޸� ���� ���� �Ǵ� ������ �������� ���ڿ��� ���̸�ŭ �޸𸮸� �Ҵ�
//		name = new char[len]; //�����Ҵ�
//		strcpy_s(name,len,myName);
//		age = myAge;
//	}
//
// 
//	//��ü�迭�� ������ �ʿ��� ������->void ������ �Ű����� ���ڸ� ��������
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()"<<endl;
//	}
//
//	void SetPersonInfo(char* myName, int myAge)
//	{
//		name = myName;
//		age = myAge;;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "�̸� :" << name << ",";
//		cout << "���� :" << age << endl;
//	}
//
//	~Person() //�Ҹ��� - �����ڿ��� �Ҵ��� �޸� ������ �Ҹ꿡 ���� �ڵ� ����
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};


////��ü ������ �迭
//class Person
//{
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myName, int myAge)
//	{
//		int len = strlen(myName) + 1;   //�޸� ���� ���� �Ǵ� ������ �������� ���ڿ��� ���̸�ŭ �޸𸮸� �Ҵ�
//		name = new char[len]; //�����Ҵ�
//		strcpy_s(name,len,myName);
//		age = myAge;
//	}
//
//	//��ü�迭�� ������ �ʿ��� ������->�Ű����� ���ڸ� ��������
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()"<<endl;
//	}
//
//	void SetPersonInfo(char* myName, int myAge)
//	{
//		name = myName;
//		age = myAge;;
//	}
//	void ShowPersonInfo()const
//	{
//		cout << "�̸� :" << name << ",";
//		cout << "���� :" << age << endl;
//	}
//
//	~Person() //�Ҹ��� - �����ڿ��� �Ҵ��� �޸� ������ �Ҹ꿡 ���� �ڵ� ����
//	{
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};

//
////This ������
//class SoSimple
//{
//private :
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "num =" << num << ",";
//		cout << "address ="<<this << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer() //���� ��ȯ���� SoSimple *��
//	{
//		return this; //�̹����� ����Ǵ� ��ü�� �����͸� ��ȯ
//	}
//};

////This ������ �̿�
//class TwoNumber
//{
//private:
//	int num1;
//	int num2;
//public:
//	TwoNumber(int num1, int num2)
//	{
//		this->num1 = num1; // this->num1(�������)=num1(�Ű�����)
//		this->num2 = num2;
//	}
//	/*TwoNumber(int num1,int num2)
//		:num1(num1),num2(num2) //��� �̴ϼȶ����������� this������ ��� x
//		{
//		}
//	*/
//	void ShowTwoNumber()
//	{
//		cout << this->num1<< endl;
//		cout << this->num2<< endl;
//	}
//};


////self-reference �� ��ȯ
//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n)
//	{
//		cout << "��ü ����" << endl;
//	}
//
//	SelfRef& Adder(int n)
//	{
//		num += n;
//		return *this;  //��ü �ڽ��� ��ȯ
//	}
//	SelfRef& ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};

int main(void)
{
	////��ü�迭
	//Person pArr[3]; //��ü�迭-�迭������ ��ü�� �Բ� ����-�����ڴ� void ������
	//char namestr[100];
	//char* strptr;
	//int age;
	//int len;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "�̸� :";
	//	cin >> namestr;
	//	cout << "���� :";
	//	cin >> age;
	//	len = strlen(namestr) + 1;
	//	strptr = new char[len];
	//	strcpy_s(strptr,len, namestr);
	//	pArr[i].SetPersonInfo(strptr, age);
	//}
	//pArr[0].ShowPersonInfo();
	//pArr[1].ShowPersonInfo();
	//pArr[2].ShowPersonInfo();



	////��ü ������ �迭
	//Person* parr[3]; // ��ü ������ �迭- ��ü�� �����Ҽ��ִ� ������ ���� �迭 ->������ ��ü���������� �ʿ� 
	//char namestr[100];
	//int age;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "�̸� :";
	//	cin >> namestr;
	//	cout << "���� :";
	//	cin >> age;
	//	parr[i] = new Person(namestr, age); // ��ü����
	//}
	//parr[0]->ShowPersonInfo();
	//parr[1]->ShowPersonInfo();
	//parr[2]->ShowPersonInfo();
	//delete parr[0];
	//delete parr[1];
	//delete parr[2];



	////This ������
	//SoSimple sim1(100);
	//SoSimple* ptr1 = sim1.GetThisPointer();//��ȯ�� �ּҰ�
	//cout << ptr1 << ","; //ptr1�� ����� �ּҰ��� ���
	//ptr1->ShowSimpleData(); //ptr1�� ����Ű�� ��ü�� ShowSimpleDataȣ��

	//SoSimple sim2(200);
	//SoSimple* ptr2 = sim2.GetThisPointer();
	//cout << ptr2 << ",";
	//ptr2->ShowSimpleData();



	////This ������ �̿�
	//TwoNumber two(2, 4);
	//two.ShowTwoNumber();



	////self-reference �� ��ȯ
	//SelfRef obj(3);
	//SelfRef& ref = obj.Adder(2);

	//obj.ShowTwoNumber();
	//ref.ShowTwoNumber();

	//ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	int c;
	
	c=getchar();
	printf("sdafs");
	
	
	return 0;
}