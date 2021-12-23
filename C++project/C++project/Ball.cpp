#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
#include"Ball.h"
#include"Screen.h"
#include"Bar.h"
#include"Brick.h"
using namespace std;

//��������
#define R 1

//������� ����
#define BarHeight 1

//����� ���α���
#define BrickWidth 2
#define BrickHeight 1

//1.Ball�� ��������� ����ϱ����� �Լ�
int Ball::f_Ball_Get_Direct() const
{
	return Ball_Direct;
}
int Ball::f_Ball_Get_X() const
{
	return BallX;
}
int Ball::f_Ball_Get_Y() const
{
	return BallY;
}

//���� ������
Ball::Ball()
{
	BallX = 24;
	BallY = 29;
}

//2.�ʱ�߻� ������ or��������
//ó���� Main���� SpaceBar�� ���� InitBallȣ��
void Ball::f_InitBALL()
{
	BallX = 24;
	BallY = 29;
	InitBallMove = true;

	srand((unsigned int)time(NULL));

	int Startdirect = rand() % 2;
	if (Startdirect == 1)
	{
		Ball_Direct = Right_top;
		BallMoveX = true;
		BallMoveY = true;
	}

	//������
	else
	{
		Ball_Direct = Left_top;
		BallMoveX = false;
		BallMoveY = true;
	}
}

//4->������ �浹���� �Լ�
bool Ball::f_BALL_Brick(Ball* ballobj, Brick* Brickobj)
{
	if (!ballobj->InitBallMove)
		return false;
	//���� �����¿� ��ǥ
	int BallTop = ballobj->BallY;
	int BallBottom = ballobj->BallY + R;
	int BallLeft = ballobj->BallX;
	int BallRight = ballobj->BallX + 2 * R;

	//������ �����¿� ��ǥ
	int BrickNumY = 3, BrickNumX = 20;
	int BrickX, BrickY;
	int BrickLeft, BrickRight, BrickTop, BrickBottom;

	// Brick[]-XY��� 2���� �迭 ,  BrickNumX Y - X, Y ��ϰ��� 
	for (int y = 0; y < BrickNumY; y++)
	{
		for (int x = 0; x < BrickNumX; x++)
		{

			// ������ �׾��ִ� ��� ���� �������
			//����� ����ִ���
			if (!Brickobj->get_display_signal(x, y))
			{
				continue;
			}

			BrickLeft = Brickobj->get_x(x, y);
			BrickRight = BrickLeft + BrickWidth;
			BrickTop = Brickobj->get_y(x, y);
			BrickBottom = BrickTop + BrickHeight;

			//�����迭�� �����ϱ����� �ε���
			int index;
			if (y == 0)
			{
				index = x + y;
			}
			else if (y == 1)
			{
				index = x + y + 20;
			}
			else if (y == 2)
			{
				index = x + y + 40;
			}

			// ���ϰ� �����ϰ� �浹 üũ
			// ���ϰ� �ε�ġ�� ���
			if (BallLeft == BrickLeft)
			{
				// �Ʒ��� �浹
				if (ballobj->BallMoveY && (BallTop >= BrickTop) && (BallTop - BrickTop <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
				// ���� �浹
				if (!ballobj->BallMoveY && (BallBottom <= BrickBottom) && (BrickBottom - BallBottom <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
			}
			else if (BallLeft <= BrickRight && BallRight >= BrickRight)
			{
				if (ballobj->BallMoveY && (BallTop >= BrickTop) && (BallTop - BrickTop <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
				if (!ballobj->BallMoveY && (BallBottom <= BrickBottom) && (BrickBottom - BallBottom <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
			}
			else if (BallLeft <= BrickLeft && BallRight >= BrickLeft)
			{
				if (ballobj->BallMoveY && (BallTop >= BrickTop) && (BallTop - BrickTop <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
				if (!ballobj->BallMoveY && (BallBottom <= BrickBottom) && (BrickBottom - BallBottom <= BrickHeight))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveY = !ballobj->BallMoveY;
					return true;
				}
			}


			// �¿찡 �ε�ġ�� ���
			if (BallTop == BrickTop && BallBottom == BrickBottom)
			{
				//���ʸ� �浹
				if (ballobj->BallMoveX && (BallRight <= BrickLeft) && (BrickLeft - BallRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
				// �����ʸ� �浹
				if (!ballobj->BallMoveX && (BallLeft >= BrickRight) && (BallLeft - BrickRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
			}
			//������ ������ �ö�
			else if (BallBottom <= BrickTop && (BrickTop - BallTop <= R))
			{
				if (ballobj->BallMoveX && (BallRight <= BrickLeft) && (BrickLeft - BallRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
				if (!ballobj->BallMoveX && (BallLeft >= BrickRight) && (BallLeft - BrickRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
			}
			//������ �Ʒ����� �ö�
			else if (BallTop >= BrickBottom && BallBottom - BrickBottom <= R)
			{
				if (ballobj->BallMoveX && (BallRight <= BrickLeft) && (BrickLeft - BallRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
				if (!ballobj->BallMoveX && (BallLeft >= BrickRight) && (BallLeft - BrickRight <= 0))
				{
					Brickobj->delete_bricks(index);
					ballobj->BallMoveX = !ballobj->BallMoveX;
					return true;
				}
			}
		}
	}
	//�浹���� �ʾ�����
	return false;

}







//5.����� �浹���� �Լ�
bool Ball::f_BALL_Bar(Ball* ballobj, Bar* Barobj)
{
	if (!ballobj->InitBallMove)
	{
		return false;
	}

	// �� ������ ���̸� ����
	if (ballobj->BallMoveY)
	{
		return false;
	}
	int BallBottom = ballobj->BallY + R;
	int BallLeft = ballobj->BallX;
	int BallRight = ballobj->BallX + 2 * R;

	int BarTop = Barobj->Get_Y();
	int BarBottom = Barobj->Get_Y() + BarHeight;
	int BarLeft = Barobj->Get_X();
	int BarRight = Barobj->Get_X() + Barobj->Get_Size(); //+������ ���� ����;

	// �簢�� �ٿ� ���� ���� �浹 ó��
	// ����
	if (BarTop >= BallBottom && (BarTop - BallBottom <= 0))
	{
		// �¿�
		if (BallLeft <= BarLeft && BallRight >= BarLeft)
		{
			ballobj->BallMoveY = !ballobj->BallMoveY;
			return true;
		}
		else if (BallLeft >= BarLeft && BallRight <= BarRight)
		{
			ballobj->BallMoveY = !ballobj->BallMoveY;
			return true;
		}
		else if (BallLeft <= BarRight && BallRight >= BarRight)
		{
			ballobj->BallMoveY = !ballobj->BallMoveY;
			return true;
		}
	}

	//�浹���� �ʾ�����
	return false;
}




//6.���� �浹���� �Լ�
bool Ball::f_BALL_Board(Ball* ballobj)

{
	if (!ballobj->InitBallMove)
	{
		return false;
	}

	int BallTop = ballobj->BallY;
	int BallBottom = ballobj->BallY + R;
	int BallLeft = ballobj->BallX;
	int BallRight = ballobj->BallX + 2 * R;


	//������ ����â�� ũ��(���)
	int BoardLeft = 0;
	int BoardRight = 50;
	int BoardTop = 0;
	int BoardBottom = 35;

	// ����
	if (BallLeft == BoardLeft)
	{
		ballobj->BallX = BoardLeft; // ��ġ ����
		ballobj->BallMoveX = !ballobj->BallMoveX;
		return true;
	}

	// ������
	if (BallRight == BoardRight)
	{

		ballobj->BallX = BoardRight - 2 * R; // ��ġ ����
		ballobj->BallMoveX = !ballobj->BallMoveX;
		return true;
	}

	// ��
	if (BallTop == BoardTop)
	{
		ballobj->BallY = BoardTop; // ��ġ ����
		ballobj->BallMoveY = !ballobj->BallMoveY;
		return true;
	}

	// �Ʒ�
	if (ballobj->BallY > 30)
	{
		InitBallMove = false;
	}

	//�浹���� �ʾ�����
	return false;
}

//Ball�� �̵����⿡ ���� �̵������ִ� �Լ� �Լ�
void Ball::f_MoveBall(Ball* ballobj)
{

	if (ballobj->BallMoveX == false && ballobj->BallMoveY == true)
	{
		ballobj->Ball_Direct = Left_top;
	}
	else if (ballobj->BallMoveX == false && ballobj->BallMoveY == false)
	{
		ballobj->Ball_Direct = Left_down;
	}
	else if (ballobj->BallMoveX == true && ballobj->BallMoveY == true)
	{
		ballobj->Ball_Direct = Right_top;
	}
	else
		ballobj->Ball_Direct = Right_down;


	switch (ballobj->Ball_Direct)
	{
	case 0:
		ballobj->BallX -= 1;
		ballobj->BallY -= 1;
		break;
	case 1:
		ballobj->BallX -= 1;
		ballobj->BallY += 1;
		break;
	case 2:
		ballobj->BallX += 1;
		ballobj->BallY -= 1;
		break;
	case 3:
		ballobj->BallX += 1;
		ballobj->BallY += 1;
		break;
	}
}


//�ܼ�â�� Ball�� ������ִ� �Լ�
void Ball::Render()
{
	gotoxy(BallX, BallY);
	cout << "��";
}

//���� ������ġ�� �������ִ� �Լ�
bool Failed(const Ball* ballobj)
{
	if (ballobj->BallY > 30)
		return true;
	else
		return false;
}


