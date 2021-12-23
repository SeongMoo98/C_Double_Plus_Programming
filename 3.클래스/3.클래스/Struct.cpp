#include<iostream>
using namespace std;

namespace CAR_CONST
{
	enum //관련 정수상수들의 집합을 하나의 자료형으로 정의 	
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	/*enum //구조체 안에서 enum상수의 선언이 가능
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};*/

	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//함수의 선언
	void ShowCarState();
	void Accel();
	void Break();
};



int main(void)
{
	//구조체
	Car run99 = { "run99",100,0 }; //구조체 변수 선언 
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.Break();
	run99.ShowCarState();
	return 0;
}

//함수를 밖으로 뺴내면-inline화 시키기 왜??/
inline void Car::ShowCarState()
{
	cout << "소유자 ID : " << gamerID << endl; //구조체내의 변수에 접근하기 위해 범위지정연산자 사용안해도됨
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl;
}
inline void Car::Accel()
{
	if (fuelGauge == 0)
	{
		return;
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}
inline void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}