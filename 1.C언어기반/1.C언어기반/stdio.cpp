#include <iostream>
using namespace std;

//�Լ������ε�
void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a, int b);

//����Ʈ�� ����
int BoxVolume(int length, int width = 1, int height = 1);

//�ζ����Լ�
inline int SQUARE(int x)
{
	return x * x;
}

//�̸���������
namespace BestComImpl
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}
namespace ProgComImpl
{
	void SimpleFunc(void);
}


int main()
{
	//
	////printf 
	//int num = 20;
	//std::cout << "Hello World"  << std::endl;   //std :: cout= printf, std :: endl : ����(\n)
	//std::cout << num << ' ' << 'A' << std::endl;
	

	////scanf
	//int val1;
	//std::cout << "ù��° ���� �Է� :";
	//std::cin >> val1;
	//int val2;
	//std::cout << "�ι�° ���� �Է� :";
	//std::cin >> val2;
	//int result = val1 + val2; // C++�� ������ ������ġ�� ������ ���� �ʴ´�
	//std::cout << "���� ��� : " << result << std::endl;


	////������ ���� : ������ġ�� ���ֹ��� �ʴ´�
	//int val1, val2;
	//int result = 0;
	//std::cout << "�ΰ��� �����Է� :";
	//std::cin >> val1 >> val2; //������ �������� �Է��� ��ɰ���
	//if (val1< val2)
	//{
	//	for (int i = val1 + 1; i < val2; i++)
	//	{
	//		result += i;
	//	}
	//}
	//else
	//{
	//	for (int i = val2 + 1; i < val1; i++)
	//	{
	//		result += i;
	//	}
	//}
	//std::cout << "�� �� ������ ���� �� :" << result << std::endl;


	////�迭 ����� ���ڿ� �����
	//char name[100];
	//char lang[200];
	//
	//std::cout << "�̸��� �����Դϱ�?";
	//std::cin >> name;
	//
	//std::cout << "�����ϴ� ���α׷��� ���� �����Դϱ�?";
	//std::cin >> lang;

	//std::cout << "�� �̸��� " << name << "�Դϴ�." << std::endl;
	//std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;


	////�Լ� �����ε�
	//MyFunc();
	//MyFunc('a');
	//MyFunc(3, 5);


	////�Լ��� defalut ��
	//cout << "[3,3,3]" << BoxVolume(3, 3, 3) << endl;
	//cout << "[5,5,D]" << BoxVolume(5, 5) << endl;
	//cout << "[7,D,D]" << BoxVolume(7) << endl;
	////cout << "[D,D,D]" << BoxVolume() << endl; //���� 1���� ����������� 


	////inline �Լ�
	//cout<<SQUARE(5) << endl;
	//cout<<SQUARE(3.14) << endl;  //int �ڷ������� ��ȯ�� �Ͼ��.


	////�̸�����
	//BestComImpl::SimpleFunc(); // ::->��������������
	//ProgComImpl::SimpleFunc();


	return 0;
}



//�Լ������ε�
void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

//�Լ��� defalut ��
int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}


//�̸���������
void BestComImpl ::SimpleFunc(void)
{
		cout << "BestCom�� ������ �Լ�" << endl;
		PrettyFunc(); //������ �̸������� ���ǵ� �Լ��� ȣ���� ������ �̸����� ����� �ʿ�x
		ProgComImpl::SimpleFunc();
}

void ProgComImpl :: SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}

void BestComImpl::PrettyFunc(void)
{
	cout << "So Pretty!" << endl;
}














