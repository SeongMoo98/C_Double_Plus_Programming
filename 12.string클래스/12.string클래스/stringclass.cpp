#include <iostream>
#include<cstring>
using namespace std;
//
////stringŬ���� ��� �����
//
//class String
//{
//private:
//	int len;
//	char* str;
//public:
//	String()
//	{
//		len = 0;
//		str = NULL;
//	}
//
//	String(const char* s)
//	{
//		len = strlen(s) + 1;
//		str = new char[len];
//		strcpy_s(str, len, s);
//	}
//
//	String(const String& s)
//	{
//		len = s.len; // s�� �����ڿ��� len�� strlen+1 �� �Ǿ��ִ�
//		str = new char[len];
//		strcpy_s(str, len, s.str);
//	}
//
//	~String()
//	{
//		if (str != NULL)
//		{
//			delete[]str;
//		}
//	}
//
//
//
//
//	String& operator=(const String& s)
//	{
//		if (str != NULL)
//		{
//			delete[]str;
//		}
//		len = s.len;
//		str = new char[len];
//		strcpy_s(str, len, s.str);
//		return *this;
//
//	}
//
//	//���ڿ��� ���ٿ���
//	String& operator+=(const String& s)
//	{
//		len += (s.len-1);
//		char* tempstr = new char[len];
//		strcpy_s(tempstr, len, str);
//		strcat_s(tempstr, len, s.str);
//		if (str != NULL)
//		{
//			delete[]str;
//		}
//		str = tempstr;
//		return *this;
//	}
//
//	//��ü�� ����� ���ڿ��� ���ϵ���
//	bool operator==(const String& s)
//	{
//		return strcmp(str, s.str) ? false : true;
//	}
//
//	String operator+(const String& s)
//	{
//		len = len + s.len - 1;
//		char* tempstr = new char[len];// strlen(str)+1���� +1�� �ߺ�����
//		strcpy_s(tempstr, len, str);
//		strcat_s(tempstr, len, s.str);
//
//		String temp(tempstr);   //String temp = tempstr
//		delete[]tempstr;
//		return temp;
//	}
//	friend ostream& operator<<(ostream& os, const String& s);
//	friend istream& operator>>(istream& is, String& s);
//};
//
//ostream& operator<<(ostream& os, const String& s)
//{
//	os << s.str;
//	return os;
//}
//
//
//istream& operator>>(istream& is, String& s)
//{
//	char str[100];
//	is >> str;
//	s = String(str);
//	return is;
//}
//int main(void)
//{
//	String str1 = "I Like ";
//	String str2 = "string class";
//	String str3 = str1 + str2;
//
//
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//
//
//	str1 += str2;
//	if (str1 == str3)
//	{
//		cout << "���� ���ڿ�!" << endl;
//	}
//	else
//	{
//		cout << "�������� ���� ���ڿ�" << endl;
//	}
//
//	string str4;
//	cout << "���ڿ� �Է� : ";
//	cin >> str4;
//	cout << "�Է��� ���ڿ� : " << str4 << endl;
//
//
//	return 0;
//}




























using namespace std;



class String
{
private:
	int len;
	char* str;
public:
	String()
	{
		len = 0;
		str - NULL;
	}
	String(const char* s)
	{
		len = strlen(s) + 1;
		str = new char[len];
		strcpy_s(str,len, s);
	}

	String(const String& s)
	{
		len = s.len;
		str = new char[len];
		strcpy_s(str, len, s.str);
	}
	~String()
	{
		if (str != NULL)
		{
			delete[]str;
		}
	}

	String& operator=(const String& s)
	{
		if (str != NULL)
		{
			delete[]str;
		}
		len = s.len;
		str = new char[len];
		strcpy_s(str, len, s.str);
		return *this;
	}


	String& operator+=(const String& s)
	{
		len += (s.len - 1);
		char* temp = new char[len];
		strcpy_s(temp, len, str);
		strcat_s(temp, len, s.str);

		if (str != NULL)
		{
			delete[]str;
		}
		str = temp;
		return *this;
	}

	String& operator+(const String& s)
	{/*
		len= len + s.len - 1;
		char* temp = new char[len];
		strcpy_s(temp, len, str);
		strcat_s(temp,len,s.str);
		if (str != NULL)
		{
			delete[]str;
		}
		str = new char[len];
		strcpy_s(str, len, temp);
		delete []temp;
		return* this;*/
		len = len + s.len - 1;
		char* tempstr = new char[len];// strlen(str)+1���� +1�� �ߺ�����
		strcpy_s(tempstr, len, str);
		strcat_s(tempstr, len, s.str);
		String temp(tempstr);   //String temp = tempstr
		delete[]tempstr;
		return temp;
	}

	//String& operator==(const String& s)
	bool operator==(const String& s)
	{
		return strcmp(str, s.str) ? false: true;
	}

	friend ostream& operator<<(ostream& os, const String& s);
	friend istream& operator>>(istream& is,String& s);

};

ostream& operator<<(ostream& os, const String& s)
{
	os << s.str;
	return os;
}
istream& operator >>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}



int main(void)
{
	String str1 = "I Like ";
	String str2 = "string class";
	String str3 = str1 + str2;


	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;


	str1 += str2;
	if (str1 == str3)
	{
		cout << "���� ���ڿ�!" << endl;
	}
	else
	{
		cout << "�������� ���� ���ڿ�" << endl;
	}

	string str4;
	cout << "���ڿ� �Է� : ";
	cin >> str4;
	cout << "�Է��� ���ڿ� : " << str4 << endl;


	return 0;
}




















