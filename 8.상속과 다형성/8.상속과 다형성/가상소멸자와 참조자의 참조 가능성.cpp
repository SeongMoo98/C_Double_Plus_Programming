#include<iostream>
using namespace std;

//����Ҹ���
class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
		cout << "First" << endl;
	}
	/*~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}*/
	virtual ~First() //����Ŭ������ �Ҹ��ڸ� virtual�� �����ϸ� ����Ŭ������ �Ҹ��ڵ鵵 ��� '���� �Ҹ���'�� ������ �ȴ�-> �ǾƷ��� ����Ŭ������ �Ҹ��ڰ� ��� ȣ��-> ���������� ȣ��
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second :public First
{
private:
	char* strTwo;
public:
	Second(const char *str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
		cout << "Second" << endl;
	}
	~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}

};
class Third : public Second
{
private : 
	char* strThr;
public:
	Third(const char* str1, const char* str2, const char* str3) : Second(str1,str2)
	{
		strThr = new char[strlen(str3) + 1];
		cout << "Third" << endl;
	}
	~Third()
	{
		cout << "~Third()" << endl;
		delete[]strThr;
	}

};


////�������� �������ɼ�
////AAA�� �����ڴ� AAA��ü �Ǵ� AAA�� ���� �Ǵ� ���������� ����ϴ� ��� ��ü�� �����Ҽ� �ִ�.
//class First
//{
//public:
//	void FirstFunc() { cout << "FirstFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
//};
//
//class Second : public First
//{
//public:
//	void SecondFunc() { cout << "SecondFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
//};
//
//
//class Third : public Second
//{
//public:
//	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
//};

int main(void)
{
	
	First* ptr = new Third("simple", "complex","normal");
	delete ptr;
	cout << endl << endl;
	//second�� �Ҵ��Ҷ� second�� �����ڰ� first�� ������ ȣ��-> ���� -> second ������ ����Ϸ�
	Second* sptr = new Third("simple","complex","normal");
	delete sptr;
	cout << endl << endl;

	Third* tptr = new Third("simple", "complex", "normal");
	delete tptr;
	cout << endl << endl;


	Third obj("SImple", "ComPlex","Normal");
	First& fref = obj;
	


		

	////�������� �������ɼ� 
	//Third obj;
	//obj.FirstFunc();
	//obj.SecondFunc();
	//obj.ThirdFunc();
	//obj.SimpleFunc();  //�������� SimpleFuncȣ��

	//cout << endl << endl;


	////obj�� Second�� ����ϴ� Third ��ü�̹Ƿ� Second�� �����ڷ� �������� - ��� �������� �ڷ����� ������ �Լ��� ȣ�Ⱑ�ɼ� �Ǵ�
	//Second& sref = obj;
	//sref.FirstFunc();
	//sref.SecondFunc();
	//sref.SimpleFunc();


	//cout << endl << endl;

	//First& fref = obj;
	//fref.FirstFunc();
	//fref.SimpleFunc();



	

	return 0;
}