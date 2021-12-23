#include<iostream>
#include<Windows.h>
#include<conio.h> // _getch()�Լ��� ����ϱ����� �������
#include"Brick.h"
#include "Bar.h"

using namespace std;


//���� 50 ���� 35 �׸��� �ϳ� ũŰ�� 2 X 1
//(0,0) ---------------------------> x
//	��
//	��
// 	��
// 	��
// 	��
// 	��
// 	��
// 	��
// 	�� 
//  �� 
// y 


	//�ܼ�â���� Ŀ���� �Է��� x,y��ǥ�� ��ġ ��Ŵ
void gotoxy(int x, int y)
{
	COORD CurSorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CurSorPosition);
}

//Ŀ�� �Ⱥ��̰� (show=0 �̸� �Ⱥ��� 1�̸� ����)
void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

//�ܼ�â ũ��� ����
void SetConsoleView()
{
	system("mode con:cols=100 lines=55");
	system("title Break_Bricks");
}

//Board- ���ӿ��� �� ��(���)�� �׸��� �Լ� (���� 50, ���� 35)
void ScreenLine()
{
	gotoxy(0, 0);
	cout << "����������������������������������������������������������������������������������������������������";
	for (int i = 1; i < 35;i++)
	{
		gotoxy(0, i);
		cout << "��                                                ��";
	}

	gotoxy(0, 35);
	cout << "����������������������������������������������������������������������������������������������������";
}


//���� �ʱ�ȭ�� - ���̵��� �Է¹޾� Bar�� �μ��� ���
int InitScreen()
{
	ScreenLine();
	gotoxy(15, 2);
	cout << "*******************";
	gotoxy(15, 3);
	cout << "*�� �� �� �� �� ��*";
	gotoxy(15, 4);
	cout << "*******************";
	gotoxy(5, 6);
	cout << "���̵��� �����ϼ��� 1. ��   2. ��   3.��";
	
	int Level;
	while (1)
	{
		Level = _getch(); //ASCII �� ��ȯ
		if (Level > 48 && Level < 52)
		{
			break;
		}

	}
	//�ܼ�â ������
	system("cls");
	return (Level - 48);
}



//������ ���̵� ��� â - Board ���� ��� ���
void ScoreScreen(int Level, Brick* BrickObj)
{
	gotoxy(55, 5);
	if (Level == 1)
	{
		cout << "���̵�  :  ��";
	}
	else if (Level == 2)
	{
		cout << "���̵�  :  ��";
	}
	else if (Level == 3)
	{
		cout << "���̵�  :  ��";
	}
	gotoxy(55, 7);
	BrickObj->score_print();
	
}

//������ ��� ������ ���� Success
void SuccessScreen()
{
	system("cls");
	gotoxy(5, 3);
	cout << "**************************************************";
	for (int i = 0; i < 10; i++)
	{
		gotoxy(5, 4 + i);
		cout << "*                                                *";
	}
	gotoxy(5, 14);
	cout << "**************************************************";
	gotoxy(20, 8);
	cout << "���ϵ帳�ϴ�";
	gotoxy(20, 10);
	cout << ("������ �� ���̽��ϴ�");

}

//������ �����Ҷ� ����â
void EndOfGame()
{
	system("cls");
	gotoxy(5, 3);
	cout << "**************************************************";
	for (int i = 0; i < 10; i++)
	{
		gotoxy(5, 4 + i);
		cout << "*                                                *";
	}
	gotoxy(5, 14);
	cout << "**************************************************";
	gotoxy(20, 8);
	cout << "������ �����մϴ�";
	gotoxy(20, 10);
	cout << "�����ϼ̽��ϴ�.";
	gotoxy(0, 30);

}

