#include <iostream>
#include<cstring>
using namespace std;

////�Լ� ���ø�
//template <typename T>
//T Add(T num1, T num2)
//{
//	cout << "T Add(T num1, T num2)" << endl;
//	return num1 + num2;
//}
//
////���ø� �Լ�- �Լ����ø����� �ѹ� �����ϸ� ���� ������(�����Ϸ��� ����)
//int Add(int num1, int num2)
//{
//	cout << "int Add(int num1, int num2)" << endl;
//	return num1 + num2;
//}
//
//double Add(double num1, double num2)
//{
//	cout << "double Add(double num1, double num2)" << endl;
//	return num1 + num2;
//}




////�� �� �̻��� ���� ���� ���ø�
//template <class T1, class T2>
//void Showdata(double num)
//{
//	cout << (T1)num << "," << (T2)num << endl;
//	//cout << T1(num) << "," << T2(num) << endl;
//	//�ΰ��� ����
//}



////template Ư��ȭ(Specialization)
//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
////���ڿ����� ��
//template <>
//char* Max(char* a, char* b)
//{
//	cout << "char* Max<char*> (char* a, char* b)" << endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
////���������� ��
//template<>
//const char* Max(const char* a, const char* b)
//{
//	cout << "const char* Max<const char*> (const char* a, cosnt char* b)" << endl;
//	return strcmp(a,b) ? a : b;
//}

int main(void)
{
	//cout << Add<int>(15, 20) << endl;;
	//cout << Add<double>(2.9, 3.7) << endl;
	//cout << Add<int>(3.2, 3.2)<<endl;    //int�� ����ȯ
	//cout << Add<double>(3.14, 2.75)<<endl;
	//cout << Add(5, 7) << endl;
	//cout << Add(3.7, 7.5);

	
	
	////�� �� �̻��� ���� ���� ���ø� ->����ȯ �̷���
	//Showdata<char, int>(65);
	//Showdata<char, int>(67);
	//Showdata<char, double>(68.9);
	//Showdata<short, double>(69.2);
	//Showdata<short, double>(70.4);



	////Ư��ȭ
	//cout << Max(11, 15) << endl;
	//cout << Max('T', 'Q')<<endl;
	//cout << Max(3.5, 7.5) << endl;
	//cout << Max("Simple", "Best") << endl;

	//char str1[] = "Simple";
	//char str2[] = "Best";

	//cout << Max(str1, str2) << endl;


	return 0;
}