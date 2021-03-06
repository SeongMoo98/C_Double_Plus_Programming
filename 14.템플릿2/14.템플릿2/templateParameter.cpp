#include<iostream>
using namespace std;

////탬플릿매개변수에는 변수의 선언이 올수있다
//template <typename T, int len>
//class SimpleArray
//{
//private:
//	T arr[len];
//public:
//	T& operator[](int idx)
//	{
//		return arr[idx];
//	}
//	SimpleArray<T, len>& operator=(const SimpleArray<T, len>& ref)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			arr[i] = ref.arr[i];
//		}
//		return *this;
//	}
//};

//탬플릿 매개변수에는 디폴트값 지정가능
template <typename T=int, int len=7>
class SimpleArray
{
private:
	T arr[len];
public:
	T& operator[](int idx)
	{
		return arr[idx];
	}
	SimpleArray<T, len>& operator=(const SimpleArray<T, len>& ref)
	{
		for (int i = 0; i < len; i++)
		{
			arr[i] = ref.arr[i];
		}
		return *this;
	}
};


int main(void)
{
	////탬플릿 매개변수에는 변수선언이 올수있다
	//SimpleArray<int, 5> i5arr1;
	//for (int i = 0; i < 5; i++)
	//{
	//	i5arr1[i] = i * 10;
	//}

	//SimpleArray<int, 5> i5arr2;
	//i5arr2 = i5arr1;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i5arr2[i] << ",";
	//}
	//cout << endl;


	//SimpleArray<int,7> i7arr1;
	//for (int i = 0; i < 7; i++)
	//{
	//	i7arr1[i] = i * 10;

	//}

	//SimpleArray<int, 7> i7arr2;
	//i7arr2 = i7arr1;
	//for (int i = 0; i < 7; i++)
	//{
	//	cout << i7arr2[i] << ",";
	//}
	//cout << endl;



	//디폴트 값
	SimpleArray<> arr;
	for (int i = 0; i < 7; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}