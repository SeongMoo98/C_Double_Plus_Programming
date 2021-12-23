//문제 8-1 상속관계의 확장과 추상 클래스

#include <iostream>
#include <cstring>
using namespace std;
//typedef enum risk
//{
//	RISK_A = 30, RISK_B = 20, RISK_C = 10
//}RISK_LEVEL;

namespace RISK_LEVEL
{
	enum { RISK_A = 30, RISK_C = 20, RISK_B = 10 };
}
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
		cout << "name: " << name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{  }
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money)
	{  }
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;    // 월 판매실적
	double bonusRatio;    // 상여금 비율 
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{  }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay()
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class ForeignSalesWorker : public SalesWorker
{
private:
	const int RiskLevel;
public:
	ForeignSalesWorker(const char* name, int money, double ratio, const int Risk)
		: SalesWorker(name, money, ratio), RiskLevel(Risk)
	{}
	int GetRiskPay()const
	{
		return (int)(SalesWorker::GetPay() * (RiskLevel / 100.0));
	}

	int GetPay()const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}
	void ShowSalaryInfo()const
	{
		ShowYourName();
		cout << "salary :" << SalesWorker::GetPay() << endl;
		cout << "risk pay :" << GetRiskPay() << endl;
		cout << "sum :" << GetPay() << endl;
	}

};


class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{  }
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
		cout << "salary: " << GetPay() << endl << endl;
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
	void ShowAllSalaryInfo() const
	{

		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

	}
	void ShowTotalSalary() const
	{
		int sum = 0;

		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();

		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	//해외 영업직 등록
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_B);
	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller1->AddSalesResult(7000);
	fseller2->AddSalesResult(7000);
	fseller3->AddSalesResult(7000);
	handler.AddEmployee(fseller1);
	handler.AddEmployee(fseller2);
	handler.AddEmployee(fseller3);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}