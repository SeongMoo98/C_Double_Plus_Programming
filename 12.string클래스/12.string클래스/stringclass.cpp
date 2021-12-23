#include <iostream>
#include<cstring>
using namespace std;
//
////string클래스 기능 만들기
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
//		len = s.len; // s는 생성자에서 len이 strlen+1 이 되어있다
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
//	//문자열이 덧붙여짐
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
//	//객체에 저장된 문자열을 비교하도록
//	bool operator==(const String& s)
//	{
//		return strcmp(str, s.str) ? false : true;
//	}
//
//	String operator+(const String& s)
//	{
//		len = len + s.len - 1;
//		char* tempstr = new char[len];// strlen(str)+1에서 +1이 중복포함
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
//		cout << "동일 문자열!" << endl;
//	}
//	else
//	{
//		cout << "동일하지 않은 문자열" << endl;
//	}
//
//	string str4;
//	cout << "문자열 입력 : ";
//	cin >> str4;
//	cout << "입력한 문자열 : " << str4 << endl;
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
		char* tempstr = new char[len];// strlen(str)+1에서 +1이 중복포함
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
		cout << "동일 문자열!" << endl;
	}
	else
	{
		cout << "동일하지 않은 문자열" << endl;
	}

	string str4;
	cout << "문자열 입력 : ";
	cin >> str4;
	cout << "입력한 문자열 : " << str4 << endl;


	return 0;
}




















