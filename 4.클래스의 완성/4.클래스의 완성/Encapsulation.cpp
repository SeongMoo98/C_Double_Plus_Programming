#include<iostream>
using namespace std;

class SinivelCap //콧물 날때
{
public:
	void Take() const
	{
		cout << "콧물이 멈춥니다." << endl;
	}
};

class SneezeCap //재채기 날때
{
public:
	void Take() const
	{
		cout << "재채기가 멈춥니다." << endl;
	}

};

class SnuffleCap //코 막힐때
{
public:
	void Take() const
	{
		cout << "코가 뚫립니다." << endl;
	}

};

//캡슐화 - 연관있는 클래스들을 클래스에 묶어버림
class Cold_Medicine
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();

	}
};




class ColdPatient
{
public:
	void TakeCold_Medicine(const Cold_Medicine& cap)const
	{
		cap.Take();
	}
};



int main(void)
{
	
	Cold_Medicine cap;
	ColdPatient sufferer;
	sufferer.TakeCold_Medicine(cap);

	return 0;
}