#include<iostream>
using namespace std;

class SinivelCap //�๰ ����
{
public:
	void Take() const
	{
		cout << "�๰�� ����ϴ�." << endl;
	}
};

class SneezeCap //��ä�� ����
{
public:
	void Take() const
	{
		cout << "��ä�Ⱑ ����ϴ�." << endl;
	}

};

class SnuffleCap //�� ������
{
public:
	void Take() const
	{
		cout << "�ڰ� �ո��ϴ�." << endl;
	}

};

//ĸ��ȭ - �����ִ� Ŭ�������� Ŭ������ �������
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