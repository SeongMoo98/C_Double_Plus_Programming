#include <iostream>
using namespace std;

#define NAME_LEN 20

void ShowMenu();
void MakeAccount();

typedef struct //�ѻ���� ���������� struct��
{
	int accID; 
	int balance;
	char name[NAME_LEN];
}Account;

Account accArr[100]; //Account�� �����ϱ�����  �迭
int accNum; //����� account ��

int main(void)
{
	int choice;
	
	while (1)
	{
		ShowMenu();
		cout << "���� :";
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
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ü���" << endl;
	cout << "5.���α׷� ����" << endl;
}

void MakeAccount(char name)
{
	int accID;
	int balance;
	char name[NAME_LEN];

	cout<<"[���°���]"
	cout << "���¹�ȣ�� �Է����ּ��� :" << endl;
	cin >> name;

}