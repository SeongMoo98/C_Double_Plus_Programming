#include <iostream>
using namespace std;

//bool�� ������
bool IsPositive(int num)
{
	if (num < 0)
		return false;
	else
		return true;
}

//�����ڿ� �Լ�
void SwapByRef(int& ref1, int& ref2);

//�Լ��� ����
//1.2 ��ȯ�� ����, ��ȯ�� ����or ����
int& RefRefFuncOne(int& ref)
{
	ref++;
	return ref;
}

//��ȯ���� �⺻�ڷ���- ���� �ӽú����� ��ȯ ->����x
int RefRefFuncTwo(int& ref)
{
	ref++;
	return ref;
}



int main(void)
{
	////bool�� ������
	//bool isPos;
	//int num;
	//cout << "InPut Number :";
	//cin >> num;

	//isPos = IsPositive(num);
	//if (isPos) // ���ǹ��� true�̸�
	//{
	//	cout << "Positive Number" << endl;
	//}
	//else
	//{
	//	cout << "Negative Number" << endl;
	//}
		

	//������(Reference)
	
	////�迭��Ҹ� ���� : �迭�� ��Ҵ� ������ ����
	//int arr[3] = { 1,3,5 };
	//int& ref1 = arr[0];
	//int& ref2 = arr[1];
	//int& ref3 = arr[2];

	//cout << ref1 << endl;
	//cout << ref2 << endl;
	//cout << ref3 << endl;
	////�ּҰ� ����
	//cout << &(arr[0]) << endl; 
	//cout << &ref1 << endl;


	////������ ������ ����
	//int num = 12;
	//int* ptr = &num;
	//int** dptr = &ptr;

	//int& ref = num;
	//int* (&pref) = ptr;
	//int** (&dpref) = dptr;

	//cout << ref << endl;
	//cout << *ptr << endl;
	//cout << **dpref << endl;

	//cout << "num�� �ּ� :" << &num << endl;
	//cout <<"������ ���� ptr�� ������ num�� �ּ� :"<< ptr << endl; 
	//cout << "������ ���� ptr�� ���� �ּ�:" << &ptr << endl;
	//cout << "���� ������ ���� dptr�� ������ ptr �ּ� :"<<dptr << endl;
	//cout << "���� ������ ���� dptr�� ���� �ּ�"<<&dptr << endl;

	//cout << endl;

	//cout << "num�� �ּ� :" << &num << endl;
	//cout << "������ ���� ptr�� ���� �ּ�:" << &ptr << endl;
	//cout << "������ pref�� ������ ptr�� �ּ� :" << &pref << endl;
	//cout << "���� ������ ���� dptr�� ���� �ּ�" << &dptr << endl;
	//cout << "������ dpref�� ������  dptr��  �ּ�" << &dpref << endl;


	////�����ڿ� �Լ�
	////call-by-reference
	//int val1 = 10;
	//int val2 = 20;

	//SwapByRef(val1, val2);
	//cout << "val1 :" << val1 << endl;
	//cout << "val2 :" << val2 << endl;


	////�Լ��� ����
	////1.��ȯ���� ����,��ȯ�� ����
	//int num1 = 1;
	//int& num2 = RefRefFuncOne(num1);

	//num1++;
	//num2++;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;

	////2.��ȯ���� ����,��ȯ�� ����
	//int num1 = 1;
	//int num2 = RefRefFuncOne(num1);

	//num1+=1;
	//num2 += 100;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;

	////3.��ȯ���� �⺻�ڷ��� -> ������ ������� ���� ��ȯ
	//int num1 = 1;
	//int num2 = RefRefFuncTwo(num1);

	//num1 += 1;
	//num2 += 100;
	//cout << "num1:" << num1 << endl;
	//cout << "num2:" << num2 << endl;



	return 0;
}

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

