#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


//������ ����
void Divide(int num1, int num2)
{
	if (num2 == 0)
	{
		throw num2;
	}
	cout << "�������� �� : " << num1 / num2 << endl;
	cout << "�������� ������ : " << num1 % num2 << endl;
}



////���ܻ�Ȳ�� �߻��� ��ġ�� ���ܻ�Ȳ�� ó���ؾ� �ϴ� ��ġ�� �ٸ� ���
//int StoI(char* str)
//{
//	int len = strlen(str);
//	int num = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] < '0' || str[i]>'9')
//		{
//			throw str[i];
//		}
//		//���ڿ��� �������·� ��ȯ
//		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
//		//num = atoi(str);
//	}
//	return num;
//}


////����Ǯ�� - ���ܰ� ó������ �ʾƼ�. �Լ��� ȣ���� �������� ���ܵ����Ͱ� ���޵Ǵ� ����
//void SimpleFuncOne(void);
//void SimpleFuncTwo(void);
//void SimpleFuncThree(void);



////�ڷ����� ��ġ���� �ʾƵ� ���ܵ����� ���޵�
////�ϳ��� try��Ͽ� �ټ��� catch
//int StoI(char* str)
//{
//	int len = strlen(str);
//	int num = 0;
//	for (int i = 0; i < len; i++)
//	{
//		//ù�ڸ��� 0
//		if (len !=0 && str[0]=='0')
//		{
//			throw 0;
//		}
//		for (int i = 0; i < len; i++)
//		{
//			if (str[i] < '0' || str[i]>'9')
//			{
//				throw str[i];
//			}
//		}
//		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
//		//num = atoi(str);
//	}
//	return num;
//}

int main(void)
{	
	//������ ����
	int num1, num2;
	cout << "�� ���� ���ڸ� �Է��ϼ��� : ";
	cin >> num1 >> num2;


	try
	{
		Divide(num1, num2); //lifo
		//����ó���� å�ӵ� divide�� �Ѿ
	 	cout << "�������� ���ƽ��ϴ�" << endl;
	}
	catch(int expn)
	{
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ٽ� �����ϼ���." << endl;
	}



	////���ܻ�Ȳ�� �߻��� ��ġ�� ���ܻ�Ȳ�� ó���ؾ� �ϴ� ��ġ�� �ٸ� ���
	//char str1[100];
	//char str2[200];
	//while (1)
	//{
	//	cout << "�� ���� ���� �Է� : ";
	//	cin >> str1 >> str2;

	//	try
	//	{
	//		cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
	//		break;
	//	}
	//	catch (char ch)
	//	{
	//		cout << "���� " << ch << "�� �ԷµǾ����ϴ�." << endl;
	//		cout << "���Է��� �����մϴ�." << endl;
	//	}
	//}
	//cout << "���α׷��� �����մϴ�." << endl;



	////����Ǯ��
	//try
	//{
	//	SimpleFuncOne();
	//}
	//catch (int expn)
	//{
	//	cout << "���� �ڵ� : " << expn << endl;
	//}



	////�ϳ��� try�� �ټ��� catch
	//char str1[100];
	//char str2[200];
	//while (1)
	//{
	//	cout << "�� ���� ���� �Է� : ";
	//	cin >> str1 >> str2;

	//	try
	//	{
	//		cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
	//		break;
	//	}
	//	catch (char ch)
	//	{
	//		cout << "���� " << ch << "�� �ԷµǾ����ϴ�." << endl;
	//		cout << "���Է��� �����մϴ�." << endl;
	//	}
	//	catch (int expn)
	//	{
	//		if (expn == 0)
	//			cout << "0���� �����ϴ� ���ڴ� �ԷºҰ�." << endl;
	//		else
	//			cout << "���������� �Է��� �̷�������ϴ�." << endl;
	//		cout << "���Է� �����մϴ�." << endl << endl;
	//	}
	//}
	//cout << "���α׷��� �����մϴ�." << endl;


	return 0;
}

//����Ǯ��
//void SimpleFuncOne(void)
//{
//	cout << "SImpleFuncOne(void)" << endl;
//	SimpleFuncTwo();
//}
//void SimpleFuncTwo(void)
//{
//	cout << "SImpleFuncTwo(void)" << endl;
//	SimpleFuncThree();
//}
//void SimpleFuncThree(void)
//{
//	cout << "SImpleFuncThree(void)" << endl;
//	throw - 1;
//}
