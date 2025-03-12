#include <iostream>
using namespace std;

int main()
{
	const int length = 10;
	int arr[length];
	int arr1[length] = { 0 };

	for (unsigned int i = 0; i < length; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << "\n";
	cout << "____________________________________________________\n";

	for (unsigned int i = 0; i < length; i++)
	{
		cout << arr1[i] << '\t';
	}
	cout << "\n";
	int arrFib[10]{ 0 };
	cout << "____________________________________________________\n";
	for (unsigned int i = 0; i < length; i++)
	{
		if (i > 1)
			arrFib[i] = arrFib[i - 1] + arrFib[i - 2];
		else
		{
			arrFib[i] = i;
		}
		cout << arrFib[i] << '\t';
	}
	cout << "\n";
	return 0;
}


