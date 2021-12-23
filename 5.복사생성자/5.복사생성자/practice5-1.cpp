#include<iostream>
#include<cstring>
using namespace std;

namespace COMP_POS
{
	enum { CELRK, SENIOR, ASSIST, MANAGER }; //���ʴ�� 0 1 2 3
	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case 0:
			cout << "���" << endl;
			break;
		case 1:
			cout << "����" << endl;
			break;
		case 2:
			cout << "�븮" << endl;
			break;
		case 3:
			cout << "����" << endl;
			break;
		}
	}

}


class NameCard
{

private:
	char* FirstName;
	char* Company;
	char* PhoneNum;
	int Position;
public:
	NameCard(const char* First, const char* Comp, const char* PhNum, int Pos) : Position(Pos)
	{
		int len1 = strlen(First) + 1;
		int len2 = strlen(Comp) + 1;
		int len3 = strlen(PhNum) + 1;

		FirstName = new char[len1];
		Company = new char[len2];
		PhoneNum = new char[len3];

		/*FirstName = new char[strlen(First) + 1];
		Company = new char[strlen(Comp) + 1];
		PhoneNum = new char[strlen(PhNum) + 1];*/


		strcpy_s(FirstName, len1, First);
		strcpy_s(Company, len2, Comp);
		strcpy_s(PhoneNum, len3, PhNum);
	}

	//���������
	NameCard(const NameCard& copy) : Position(copy.Position)
	{
		int len1 = strlen(copy.FirstName) + 1;
		int len2 = strlen(copy.Company) + 1;
		int len3 = strlen(copy.PhoneNum) + 1;
		FirstName = new char[len1];
		Company = new char[len2];
		PhoneNum = new char[len3];

		strcpy_s(FirstName, len1, copy.FirstName);
		strcpy_s(Company, len2, copy.Company);
		strcpy_s(PhoneNum, len3, copy.PhoneNum);
	}

	void ShowNameCardInfo()
	{
		cout << "�̸� : " << FirstName << endl;
		cout << "ȸ�� : " << Company << endl;
		cout << "��ȭ��ȣ : " << PhoneNum << endl;
		cout << "���� : ";
		COMP_POS::ShowPositionInfo(Position);
		cout << endl;
	}

	~NameCard()
	{
		delete[]FirstName;
		delete[]Company;
		delete[]PhoneNum;
	}

};


int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CELRK);
	NameCard copy1 = manClerk;

	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;


	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();




	return 0;
}