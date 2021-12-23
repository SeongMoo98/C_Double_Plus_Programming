#include<iostream>
#include <cstring>
using namespace std;

////간접상속 - AAA형 포인터 변수는 AAA객체 또는 AAA를 직접 혹은 간접적으로 상속하는 모든 객체를 가리킬수 있다
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
//	//함수 오버라이딩 - 오버라이딩 도니 기초클래스의 함수는 오버라이딩한 유도클래스의 한수에 가려진다.
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
//	Employee* empList[50];   //Employee 클래스를 상속하는 클래스의 객체도 배열에 저장가능!!
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
//		//가상함수에서 설명
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
	//Person* ptr1 = new Student();				//Student은 Person를 상속하므로
	//Person* ptr2 = new PartTimeStudent();		//PartTImeStudent는 Person을 간접상속하므로
	//Student* ptr3 = new PartTimeStudent();		

	//ptr1->Sleep();
	//ptr2->Sleep();
	//ptr3->Study();

	//delete ptr1, ptr2, ptr3;



	//EmployeeHandler handler;

	//handler.AddEmployee(new PermanentWorker("Kim", 1000));
	//handler.AddEmployee(new PermanentWorker("Lee", 1500));

	////Temporary worker 와 SalesWorker 모두 Employee를 상속하거나 간접상속 -> AddEmployee호출가능
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