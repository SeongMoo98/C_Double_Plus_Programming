#include<iostream>
using namespace std;


////case 2 - call-by-value �Լ����� ���ڰ� ��ü
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n){}
//	SoSimple(const SoSimple& copy)
//		: num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//
//	void ShowData()
//	{
//		cout << "num : " << num << endl;
//	}
//
//};
//
//void SimpleFunObj(SoSimple ob)
//{
//	ob.ShowData();
//}


////case 3
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n) {}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple &copy)" << endl;
//	}
//	SoSimple& AddNum(int n) //��ü�ڽ��� �������� ��ȯ
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData()
//	{
//		cout << "num :" << num << endl;
//	}
//	
//	
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "return ����" << endl;
//	return ob;  //ob�� �ӽð�ü
//}


////�ӽð�ü�� �Ҹ�
//class Temporary
//{
//private:
//	int num;
//public:
//	Temporary(int n):num(n)
//	{
//		cout << "create Object : "<<num << endl;
//	}
//	~Temporary()
//	{
//		cout << "destroy Object :" << num << endl;
//	}
//	void ShowTempInfo()
//	{
//		cout << "My num is " << num << endl;
//	}
//};


////�ӽð�ü���� 
//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "New Object : " << this << endl;
//	}
//	SoSimple(const SoSimple& copy) : num(copy.num)
//	{
//		cout << "New Copy Obj : " << this << endl;
//	}
//	~SoSimple()
//	{
//		cout << "Destroy Obj :" << this << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "Para ADR : " << &ob << endl;
//	return ob;
//}

int main(void)
{
	////case 2
	//SoSimple obj(7);
	//cout << "�Լ�ȣ�� ��" << endl;
	//SimpleFunObj(obj); //�Լ��� ���ڸ� �����ϴ� �������� ��������� ȣ��
	//cout << "�Լ�ȣ�� ��" << endl;



	////case 3
	//SoSimple obj(7);
	//SimpleFuncObj(obj).AddNum(30).ShowData(); //SimpleFunc�� ��ü�� AddNumȣ�� ��ȯ�ϴ� ���������� showdataȣ��
	////ob�� �ӽð�ü, �ӽð�ü�� ������� AddNum �Լ��� ȣ��->�ӽð�ü�� ����� ���� 30���� 
	//obj.ShowData();




	////�ӽð�ü�� �Ҹ�
	//Temporary obj(50);
	//cout << "********** after make!" << endl << endl;

	//Temporary (100); //�ӽð�ü / Temporary obj(50)�� main�� ������ �Ҹ��ڷ� �Ҹ���
	//cout << "********** after make!" << endl << endl;
	 
	
	////const? �����ߴµ� ���� ��� �����Ұ���? ��ü���̾��µ�
	//const Temporary& ref = Temporary(300);  //�����ڿ� �����Ǵ� �ӽð�ü�� �ٷ� �Ҹ���� �ʴ´�.
	//cout << "********** after make!" << endl << endl;

	//Temporary(200).ShowTempInfo();
	//cout << "********** after make!" << endl << endl;



	////�ӽð�ü����
	//SoSimple obj(7);
	//SimpleFuncObj(obj);

	//cout << endl;
	//SoSimple tempref = SimpleFuncObj(obj);
	//cout << "Return Obj : " << &tempref << endl;
	

	
	return 0;
}