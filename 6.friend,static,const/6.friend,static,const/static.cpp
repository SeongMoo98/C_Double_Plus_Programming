#include<iostream>
using namespace std;

//class SoSimple
//{
////private�� �ؾ��ϴµ� main�� 1�࿡�� static������ ������ �����ٷ��� public���� ����
//public:
//	static int simObjCnt;
//public:
//	SoSimple()
//	{
//		simObjCnt++; //����Լ������� �������ó�� ��밡��
//		cout << simObjCnt << "��° SoSimple ��ü" << endl;
//	}
//};
//int SoSimple::simObjCnt = 0;



////static ��� �Լ�
//class SoSimple
//{
//private :
//	int num1;
//public:
//	static int num2; //���ڸ� �Է¹ޱ����� public
//	SoSimple(int n) : num1(n) {}
//	static void Adder(int n)
//	{
//		//num1 += n;  - static ����Լ��� ��������� ���� x
//		num2 += n;
//	}
//	void ShowData()
//	{
//		cout << num1 << "," << num2 << endl;
//	}
//};
//int SoSimple::num2 = 0;



//const static ���
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
//	//mutable Ű����� const �Լ������� �� ���� ����
//	void CopyToNum2() const
//	{
//		num2 = num1; 
//	}
//};



int main(void)
{
	//cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl; //simObjCnt=0
	//SoSimple sim1; //simObjCnt=1
	//SoSimple sim2; //simObjCnt=2

	//cout << SoSimple::simObjCnt << "���� SoSimple ��ü" << endl; //simObjCnt=2

	////sim1 �� sim2�� �������ó�� �����ϴ� ��ó�� ���δ�
	//cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl; //simObjCnt=2
	//cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl; //simObjCnt=2


	////static ����Լ�
	//SoSimple sim1(5);
	//int num;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> num;
	//sim1.Adder(num);
	//sim1.ShowData();


	////const static ���
	//cout << "���þ� ���� : " << CountruArea::RUSSIA << "km^2" << endl;
	//cout << "ĳ���� ���� : " << CountruArea::CANADA << "km^2" << endl;
	//cout << "�߱� ���� : " << CountruArea::CHINA << "km^2" << endl;
	//cout << "�ѱ� ���� : " << CountruArea::SOUTH_kOREA << "km^2" << endl;


	////mutable
	//SoSimple sim1(5,9);
	//sim1.ShowSimpleData();
	//sim1.CopyToNum2();
	//sim1.ShowSimpleData();


	return 0;
}