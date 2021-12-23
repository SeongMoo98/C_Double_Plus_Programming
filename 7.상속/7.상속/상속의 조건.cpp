#include <iostream>
#include <cstring>
using namespace std;


////IS-A 관계
//class Computer
//{
//private:
//	char owner[50];
//public:
//	Computer(const char* name)
//	{
//		strcpy_s(owner, sizeof(owner), name);
//	}
//	void Calculate()
//	{
//		cout << "요청 내용을 계산합니다" << endl;
//	}
//};
//
//class NoteBookComp : public Computer
//{
//private:
//	int Battery;
//public:
//	NoteBookComp(const char* name, int initChag) : Computer(name), Battery(initChag)
//	{ }
//	void Charging()
//	{
//		Battery += 5;
//	}
//	void UseBatterty()
//	{
//		Battery -= 1;
//	}
//	void MovingCal()
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필요합니다" << endl;
//			return;
//		}
//		cout << "이동하면서";
//		Calculate();
//		UseBatterty();
//	}
//
//	int GetBatteryInfo() { return Battery; };
//};
//
//class TabletNoteBook : public NoteBookComp
//{
//private:
//	char regstPenModel[50];
//public:
//	TabletNoteBook(const char* name, int initChag, const char* pen)
//		: NoteBookComp(name, initChag)   //NoteBookComp의 생성자로 computer클래스 초기화 가능
//	{
//		strcpy_s(regstPenModel, sizeof(regstPenModel), pen);
//	}
//	void Write(const char* penInfo)
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필요합니다" << endl;
//			return;
//		}
//		if (strcmp(regstPenModel, penInfo) != 0)
//		{
//			cout << "등록된 펜이 아닙니다.";
//			return;
//		}
//		cout << "필기 내용을 처리합니다." << endl;
//		UseBatterty();
//	}
//};



////HAS-A 관계
//class Gun
//{
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum)
//	{
//
//	}
//	void Shot()
//	{
//		cout << "BBANG!!" << endl;
//		bullet--;
//	}
//};
//
//class Police : public Gun
//{
//private:
//	int handcuffs;
//public:
//	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
//	{
//
//	}
//
//	void PutHandCuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//};

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{

	}
	void Shot()
	{
		cout << "BBANG!!" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{
		if (bnum > 0)
		{
			pistol = new Gun(bnum);
		}
		else
		{
			pistol = NULL;
		}
	}

	void PutHandCuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shot()
	{
		if (pistol == NULL)
		{
			cout << "Hut BBANG!!" << endl;
		}
		else
		{
			pistol->Shot();
		}
	}
	~Police()
	{
		if (pistol != NULL)
		{
			delete pistol;
		}
	}
};



int main(void)
{
	////IS-A 관계
	//NoteBookComp nc("이수종", 5);
	//TabletNoteBook tn("정수영", 5, "ISE-241-242");
	//nc.MovingCal();
	//tn.Write("ISE-241-242");



	////HAS-A 관계
	//Police pman(5, 3);
	//pman.Shot();
	//pman.PutHandCuff();


	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandCuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandCuff();

	return 0;
}