#include<iostream>
#include <cstring>
using namespace std;

////������� - AAA�� ������ ������ AAA��ü �Ǵ� AAA�� ���� Ȥ�� ���������� ����ϴ� ��� ��ü�� ����ų�� �ִ�
//class Person
//{
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//
//class Student : public Person
//{
//public:
//	void Study() { cout << "Study" << endl; }
//};
//
//class PartTimeStudent : public Student
//{
//public:
//	void Work() { cout << "Work" << endl; }
//};


//
//class Employee
//{
//private:
//	char name[100];
//public:
//	Employee(const char* name)
//	{
//		strcpy_s(this->name,100,name);
//	}
//
//	void ShowYourName() const
//	{
//		cout << "name : " << name << endl;
//	}
//};
//
//class PermanentWorker : public Employee
//{
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money)
//		:Employee(name), salary(money)
//	{}
//
//	int GetPay()const
//	{
//		return salary;
//	}
//
//	void ShowSalaryInfo()const
//	{
//		ShowYourName();
//		cout << "salary : " << GetPay() << endl<<endl;
//	}
//};
//
//class TemporaryWorker : public Employee
//{
//private:
//	int workTime;
//	int payPerHour;
//public:
//	TemporaryWorker(const char* name, int pay)
//		:Employee(name), workTime(0), payPerHour(pay)
//	{ }
//
//	void AddWorkTime(int time)
//	{
//		workTime += time;
//	}
//
//	//�Լ� �������̵� - �������̵� ���� ����Ŭ������ �Լ��� �������̵��� ����Ŭ������ �Ѽ��� ��������.
//	int GetPay() const
//	{
//		return workTime * payPerHour;
//	}
//
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary sum : " << GetPay() << endl << endl;
//	}
//};
//
//class SalesWorker : public PermanentWorker
//{
//private : 
//	int salesResult;
//	double bonusRatio;
//public:
//	SalesWorker(const char* name, int money, double ratio)
//		:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
//	{ }
//	void AddSalesResult(int value)
//	{
//		salesResult += value;
//	}
//
//	int GetPay()const
//	{
//		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
//	}
//	void ShowSalaryInfo()const
//	{
//		ShowYourName();
//		cout << "salary sum : " << GetPay() << endl << endl;
//	}
//
//};
//
//class EmployeeHandler
//{
//private:
//	Employee* empList[50];   //Employee Ŭ������ ����ϴ� Ŭ������ ��ü�� �迭�� ���尡��!!
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0)
//	{ }
//
//	void AddEmployee(Employee* emp)
//	{
//		empList[empNum++] = emp;
//	}
//
//	void ShowAllSalaryInfo()const
//	{
//		//�����Լ����� ����
//		/*for(int i =0; i<empNum; i++)
//		{
//			empList[i]->ShowSalaryInfo();
//		}*/
//	}
//
//	void ShowTotalSalary() const
//	{
//		int sum = 0;
//		/*for(int i =0; i<empNum; i++)
//		{
//			sum+=empList[i]->GetPay();
//		}*/
//		cout << "salary sum : " << sum << endl;
//	}
//
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//		{
//			delete empList[i];
//		}
//	}
//};


int main(void)
{
	//Person* ptr1 = new Student();				//Student�� Person�� ����ϹǷ�
	//Person* ptr2 = new PartTimeStudent();		//PartTImeStudent�� Person�� ��������ϹǷ�
	//Student* ptr3 = new PartTimeStudent();		

	//ptr1->Sleep();
	//ptr2->Sleep();
	//ptr3->Study();

	//delete ptr1, ptr2, ptr3;



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
	//
	//handler.ShowAllSalaryInfo();

	//handler.ShowTotalSalary();


	return 0;
}