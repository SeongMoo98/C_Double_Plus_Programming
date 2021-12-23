#include<iostream>
using namespace std;

namespace CAR_CONST
{
	enum //���� ����������� ������ �ϳ��� �ڷ������� ���� 	
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
	/*enum //����ü �ȿ��� enum����� ������ ����
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

	//�Լ��� ����
	void ShowCarState();
	void Accel();
	void Break();
};



int main(void)
{
	//����ü
	Car run99 = { "run99",100,0 }; //����ü ���� ���� 
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.Break();
	run99.ShowCarState();
	return 0;
}

//�Լ��� ������ ������-inlineȭ ��Ű�� ��??/
inline void Car::ShowCarState()
{
	cout << "������ ID : " << gamerID << endl; //����ü���� ������ �����ϱ� ���� �������������� �����ص���
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl;
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