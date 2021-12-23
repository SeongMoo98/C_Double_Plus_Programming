#include<iostream>

namespace mystd
{
	using namespace std;
	class ostream
	{
	public:
		ostream& operator<<(char* s)
		{
			printf("%s", s);
			return *this;
		}
		ostream& operator<<(const char* s)
		{
			printf("%s", s);
			return *this;

		}
		ostream& operator<<(int num)
		{
			printf("%d", num);
			return *this;

		}
		ostream& operator<<(char c)
		{
			printf("%c", c);
			return *this;

		}
		ostream& operator<<(double num)
		{
			printf("%f", num);
			return *this;

		}
		ostream& operator<<(ostream& (*fp)(ostream& os))
		{
			return 	fp(*this);
		}
		
	};
	ostream& endl(ostream& os)
	{
		os<< '\n';
		fflush(stdout);
		return os;

	}
	ostream cout;
}

int main(void)
{
	using mystd::endl;
	using mystd::cout;
	cout << "Simple Stirng"<<endl;
	cout << 'c' << endl;
	cout << 5 << endl;

	return 0;
}