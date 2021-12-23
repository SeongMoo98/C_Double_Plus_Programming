#include<iostream>
using namespace std;


////°¢°¢ÀÇ ÅÆÇÃ¸´ÇÔ¼ö¿¡ ´ëÇØ staticÁö¿ªº¯¼ö À¯Áö
//template<typename T>
//void ShowStaticValue(void)
//{
//	static T num = 0;
//	num += 1;
//	cout << num << " ";
//}



//Å¬·¡½ºÅÆÇÃ¸´°ú static
template <typename T>
class SimpleStaticMem
{
private:
	static T mem;
public:
	void AddMem(int num)
	{
		mem +=num;
	}
	void ShowMem()
	{
		cout << mem << endl;
	}

};
//static ¸âº­ÀÇ ÃÊ±âÈ­ ¹®Àå
template<typename T>
T SimpleStaticMem<T> ::mem = 0;


int main(void)
{


	/*ShowStaticValue<int>();
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout << endl;

	ShowStaticValue<long>();
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	cout << endl;

	ShowStaticValue<double>();
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	cout << endl;*/



	//Å¬·¡½ºÅÆÇÃ¸´°ú static
	SimpleStaticMem<int> obj1;
	SimpleStaticMem<int> obj2;
	obj1.AddMem(2);
	obj2.AddMem(3);
	obj1.ShowMem();

	SimpleStaticMem<long> obj3;
	SimpleStaticMem<long> obj4;
	obj3.AddMem(100);
	obj4.ShowMem();





	return 0;
}