#include <iostream>
using namespace std;

#define NAME_LEN 20

void ShowMenu();
void MakeAccount();

typedef struct //한사람의 계좌정보를 struct로
{
	int accID; 
	int balance;
	char name[NAME_LEN];
}Account;

Account accArr[100]; //Account를 저장하기위한  배열
int accNum; //저장된 account 수

int main(void)
{
	int choice;
	
	while (1)
	{
		ShowMenu();
		cout << "선택 :";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			MakeAccount();
		}

		case 2:
		{

		}

		case 3:
		{

		}

		case 4:
		{

		}

		case 5 :
		{

		}

		}
	
	}





	return 0;
}

void ShowMenu()
{

	cout << "-----Menu-----" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입급" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체출력" << endl;
	cout << "5.프로그램 종료" << endl;
}

void MakeAccount(char name)
{
	int accID;
	int balance;
	char name[NAME_LEN];

	cout<<"[계좌개설]"
	cout << "계좌번호을 입력해주세요 :" << endl;
	cin >> name;

}