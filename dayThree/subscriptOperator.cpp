#include<iostream>
using namespace std;

class CArray
{
	void Init()
	{
		for (size_t i = 0; i < 5; i++)
		{
			arr[i] = (i + 1) * 10;
		}
	}
public:
	CArray()
	{
		Init();
	}
	//int& elementAt(int index)
	int& operator[](int index)
	{
		return arr[index];
	}
	friend ostream& operator<<(ostream& os, const CArray& par)
	{
		for (size_t i = 0; i < 5; i++)
		{
			os << "arr[" << i << "]=" << par.arr[i] << '\n';
		}
		return os;
	}
private:
	int arr[5];
};
int main()
{
	CArray ca;
	ca[1] = 999; //ca.operator[](1) = 999;//ca.elementAt(1) = 999;
	cout << ca;
	int k = ca[2]; //ca.operator[](2);//ca.elementAt(2);
	cout << "k=" << k << '\n';
	return 0;
}