#include <iostream>
#include<Windows.h>
#include<conio.h> // _getch()�Լ��� ����ϱ����� �������
#include"Ball.h"
#include"Bar.h"
#include"Brick.h"
#include"Screen.h"
#include<time.h> //�ܼ�â���� Render�� ����Ҷ� �ð����� �ּ� �������� ����
using namespace std;


void Render(Ball* BallObj, Brick* BrickObj, Bar* BarObj);
bool Reset(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag);
bool StartGame(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag, int Level);

int main(void)
{
    //�ʱ�ȭ��� ȭ��ũ�⼳��
    SetConsoleView();
    CursorView(0);
    int Level = InitScreen();


    bool challenge_flag = false;


    //��ü�� �����Ҵ����� ����
    Ball* ball = new Ball;
    Brick* bricks = new Brick;
    Bar* bar = new Bar(Level);
    bricks->set_bricks(5, 3);
    Render(ball, bricks, bar);


    int start; //������ �����ϱ� ���� ����
    while (1)
    {

        gotoxy(5, 40);
        cout << "SpaceBar : ���� ���� q : ��������";
        if (_kbhit())
        {
            start = _getch();
            if (start == 32)
            {
                //StartGame������ Reset�� ȣ���ϴµ� Reset�� ��ȯ���� ��ȯ �絵���̸� true, ���� ������̸� false
                if (StartGame(ball, bricks, bar, challenge_flag, Level))
                {
                    continue;
                }
                //false�϶� �� �絵�������ʰ� ���̵��� �ٽ� �����ؼ� ���� ����
                else
                {
                    Level = InitScreen();
                    continue;
                }
            }
            //�絵���̳� ó����ġ�� ���ư����� q�� ������ ������ �����ϰ� ��ü�� �Ҹ�
            else if (start == 113)
            {
                EndOfGame();
                delete ball, bricks, bar;
                return 0;
            }
            else
            {
                continue;
            }
        }

    }









    return 0;
}

//�� ��ü���� �ܼ�â�� ����ִ� �Լ�
void Render(Ball* BallObj, Brick* BrickObj, Bar* BarObj)
{
    ScreenLine();
    BallObj->Render();
    BrickObj->Render();
    BarObj->Render();
    //���Ӽӵ�����- �Ͻ������ؼ� ȭ�� �������� ����
    Sleep(30);
}

//�絵�� or ó��ȭ������ ���� �����ϴ� �Լ�
bool Reset(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag)
{

    ScreenLine();
    gotoxy(5, 6);
    cout << "\t1.�絵��\n\t2.ó��ȭ������ ���ư���\n\t3.��������" << endl;
    int option;
    while (1)
    {
        //_getch() 1 = 49, _getch() 2 = 50
        option = _getch() - 48;
        if (option == 1 || option == 2)
        {
            if (option == 1)
            {									// play again
               //��ü���� ��ġ�� ó����ġ�� �ʱ�ȭ
                BrickObj->reset_bricks();
                BallObj->f_InitBALL();
                BarObj->InitBar();
                Render(BallObj, BrickObj, BarObj);

                challenge_flag = true;
                return challenge_flag;
            }
            else if (option == 2)
            {
                challenge_flag = false;
                return challenge_flag;                          // first screen print out
            }
        }
        else if (option == 3)
        {
            EndOfGame();
            delete BallObj, BrickObj, BarObj;
            exit(1);
        }
        else
        {
            gotoxy(5, 9);
            cout << "�ٽ� �������ּ���" << endl;
            continue;
        }
    }
}

bool StartGame(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag, int Level)
{
    clock_t CurTime, OldTime;
    BallObj->f_InitBALL();


    while (1)
    {
        //���� �̵���Ű�� �̵���ų������ �� ��ü��� �浹�� Ȯ��
        BallObj->f_MoveBall(BallObj);
        BallObj->f_BALL_Bar(BallObj, BarObj);
        BallObj->f_BALL_Board(BallObj);
        BallObj->f_BALL_Brick(BallObj, BrickObj);
        BarObj->input();

        OldTime = clock();
        Render(BallObj, BrickObj, BarObj);
        ScoreScreen(Level, BrickObj);
        while (1)
        {
            CurTime = clock();
            if (CurTime - OldTime > 33)
                break;
        }
        if (Failed(BallObj))
        {
            //���� ������ġ�϶� ��� ���缭 �������� ������
            Sleep(2000);
            return Reset(BallObj, BrickObj, BarObj, challenge_flag);
        }

        if ((BrickObj->get_score()) == 60)
        {
            SuccessScreen();
            return Reset(BallObj, BrickObj, BarObj, challenge_flag);
        }

    }
}
