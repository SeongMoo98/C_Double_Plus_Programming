#include<iostream>
#include <cstring>
using namespace std;


//�����Լ�
class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	/*virtual*/ void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	/*virtual*/ void MyFunc() { cout << "ThirdFunc" << endl; }
};
class Fourth :public Third
{
public:
	/*virtual*/ void MyFunc() { cout<< "FourthFunc" << endl; }
};


class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy_s(this->name, 100, name);
	}

	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}

	//�����Լ�
	virtual int GetPay() const
	{return 0;}
	virtual void ShowSalaryInfo( )const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(const char* name, int money)
		:Employee(name), salary(money)
	{}

	int GetPay()const
	{
		return salary;
	}

	void ShowSalaryInfo()const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay)
		:Employee(name), workTime(0), payPerHour(pay)
	{ }

	void AddWorkTime(int time)
	{
		workTime += time;
	}

	int GetPay() const
	{
		return workTime * payPerHour;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary sum : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio)
		:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay()const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo()const
	{
		ShowYourName();
		cout << "salary sum : " << GetPay() << endl << endl;
	}

};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo()const
	{
	
		for(int i =0; i<empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for(int i =0; i<empNum; i++)
		{
			sum+=empList[i]->GetPay();
		}
		cout << "salary sum : " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};


////������ - ������ ������ ����� �ٸ���
//class First
//{
//public:
//	virtual void SimpleFunc() { cout << "First" << endl; }
//};
//
//class Second : public First
//{
//public:
//	virtual void SimpleFunc() { cout << "Second" << endl; }
//};

int main(void)
{
	//Fourth* ptr4 = new Fourth();
	//Third* ptr3 = ptr4;
	//Second* ptr2 = ptr4;
	//First* ptr1 = ptr2;

	//Third* tptr = new Third();
	//First* fptr = tptr;
	////�Լ� �������̵�, �����Լ� (virtual �Լ�)
	////==> �������� �ڷ����� ������� ȣ������ �������� �ʰ�, ������ ������ ������ ����Ű�� ��ü�� ���� = �����Ͱ� ����ġ�� ��ü�� ������ �������̵� �� �Լ� ȣ��
	//ptr1->MyFunc();
	//ptr2->MyFunc();
	//ptr3->MyFunc();
	//ptr4->MyFunc();

	//tptr->MyFunc();
	//fptr->MyFunc();
	//delete ptr4;


	/*Fourth& ptr4 = new Fourth();
	Third& ptr3 = ptr4;
	Second& ptr2 = ptr4;
	First& ptr1 = ptr2;*/
	Third ted;
	Third& tptr = ted;
	First& fptr = tptr;
	//�Լ� �������̵�, �����Լ� (virtual �Լ�)
	//==> �������� �ڷ����� ������� ȣ������ �������� �ʰ�, ������ ������ ������ ����Ű�� ��ü�� ���� = �����Ͱ� ����ġ�� ��ü�� ������ �������̵� �� �Լ� ȣ��
	tptr.MyFunc();
	fptr.MyFunc();
	

	//EmployeeHandler handler;

	//handler.AddEmployee(new PermanentWorker("Kim", 1000));
	//handler.AddEmployee(new PermanentWorker("Lee", 1500));

	////Temporary worker �� SalesWorker ��� Employee�� ����ϰų� ������� -> AddEmployeeȣ�Ⱑ��
	//TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	//alba->AddWorkTime(5);
	//handler.AddEmployee(alba);

	//SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	//seller->AddSalesResult(7000);
	//handler.AddEmployee(seller);

	////�����Լ� ������� TemporartyWorker�� SalesWorker�� Getpay, ShowSalaryInfo �Լ� ȣ���� ����������
	//handler.ShowAllSalaryInfo();
	//handler.ShowTotalSalary();


	////������
	//First* ptr = new First();
	//ptr->SimpleFunc();
	//delete ptr;

	//ptr = new Second();
	//ptr->SimpleFunc();    //ptr�� �����ϴ� ��ü�� �ڷ����� �ٸ���
	//delete ptr;

	return 0;
}