#include <iostream>

using namespace std;

//shallow copy ���� ����
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge) //�� const��?
	{
		int len = strlen(myName) + 1;   //�޸� ���� ���� �Ǵ� ������ �������� ���ڿ��� ���̸�ŭ �޸𸮸� �Ҵ�
		name = new char[len]; //�����Ҵ�
		strcpy_s(name, len, myName); //myName->name ���� ���ڿ� copy , strcpy
		age = myAge;
	}
	void ShowPersonInfo()const
	{
		cout << "�̸� :" << name << endl;
		cout << "���� :" << age << endl;
	}

	~Person() //�Ҹ��� - �����ڿ��� �Ҵ��� �޸� ������ �Ҹ꿡 ���� �ڵ� ����
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};


//deep copy ���� ����
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myName, int myAge)
	{
		int len = strlen(myName) + 1;   //�޸� ���� ���� �Ǵ� ������ �������� ���ڿ��� ���̸�ŭ �޸𸮸� �Ҵ�
		name = new char[len]; //�����Ҵ�
		strcpy_s(name, len, myName); //myName->name ���� ���ڿ� copy , strcpy
		age = myAge;
	}

	//���� ���縦 ���� ���������
	Person(const Person &copy) :age(copy.age)
	{
		name = new char[strlen(copy.name) + 1]; 
		strcpy_s(name, strlen(copy.name)+1, copy.name);
	}
	void ShowPersonInfo()const
	{
		cout << "�̸� :" << name << endl;
		cout << "���� :" << age << endl;
	}

	~Person() //�Ҹ��� - �����ڿ��� �Ҵ��� �޸� ������ �Ҹ꿡 ���� �ڵ� ����
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};


int main(void)
{	
	////shallow copy ���� ���� - ��ü�Ҹ��� 1���̷���
	//Person man1("Lee Dong Woo", 23);
	//Person man2 = man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();

	////deep copy ���� ���� -��ü�Ҹ��� 2�� �̷���
	//Person man1("Lee Dong Woo", 23);
	//Person man2 = man1;
	//man1.ShowPersonInfo();
	//man2.ShowPersonInfo();
	return 0;
}

