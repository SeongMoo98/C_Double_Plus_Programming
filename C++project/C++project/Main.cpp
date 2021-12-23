#include <iostream>
#include<Windows.h>
#include<conio.h> // _getch()함수를 사용하기위한 헤더파일
#include"Ball.h"
#include"Bar.h"
#include"Brick.h"
#include"Screen.h"
#include<time.h> //콘솔창에서 Render을 사용할때 시간차를 둬서 깜빡임을 줄임
using namespace std;


void Render(Ball* BallObj, Brick* BrickObj, Bar* BarObj);
bool Reset(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag);
bool StartGame(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag, int Level);

int main(void)
{
    //초기화면과 화면크기설정
    SetConsoleView();
    CursorView(0);
    int Level = InitScreen();


    bool challenge_flag = false;


    //객체를 동적할당으로 생성
    Ball* ball = new Ball;
    Brick* bricks = new Brick;
    Bar* bar = new Bar(Level);
    bricks->set_bricks(5, 3);
    Render(ball, bricks, bar);


    int start; //게임을 시작하기 위한 변수
    while (1)
    {

        gotoxy(5, 40);
        cout << "SpaceBar : 게임 시작 q : 게임종료";
        if (_kbhit())
        {
            start = _getch();
            if (start == 32)
            {
                //StartGame에서는 Reset을 호출하는데 Reset의 반환값을 반환 재도전이면 true, 게임 재시작이면 false
                if (StartGame(ball, bricks, bar, challenge_flag, Level))
                {
                    continue;
                }
                //false일때 즉 재도전하지않고 난이도를 다시 설정해서 게임 진행
                else
                {
                    Level = InitScreen();
                    continue;
                }
            }
            //재도전이나 처음위치로 돌아갔을때 q를 누르면 게임을 종료하고 객체들 소멸
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

//각 객체들을 콘솔창에 띄워주는 함수
void Render(Ball* BallObj, Brick* BrickObj, Bar* BarObj)
{
    ScreenLine();
    BallObj->Render();
    BrickObj->Render();
    BarObj->Render();
    //게임속도조절- 일시정지해서 화면 깜빡임을 줄임
    Sleep(30);
}

//재도전 or 처음화면으로 가서 실행하는 함수
bool Reset(Ball* BallObj, Brick* BrickObj, Bar* BarObj, bool& challenge_flag)
{

    ScreenLine();
    gotoxy(5, 6);
    cout << "\t1.재도전\n\t2.처음화면으로 돌아가기\n\t3.게임종료" << endl;
    int option;
    while (1)
    {
        //_getch() 1 = 49, _getch() 2 = 50
        option = _getch() - 48;
        if (option == 1 || option == 2)
        {
            if (option == 1)
            {									// play again
               //객체들의 위치를 처음위치로 초기화
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
            cout << "다시 선택해주세요" << endl;
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
        //공을 이동시키고 이동시킬때마다 각 객체들과 충돌을 확인
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
            //공이 실패위치일때 잠시 멈춰서 실패임을 보여줌
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
