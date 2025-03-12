#include <iostream>
using namespace std;

//c++11 onwards
constexpr int Factorial(int par)
{
	if (par < 2)
		return 1;
	return par * Factorial(par - 1);
}

constexpr int Fib(int par)
{
	if (par < 2)
		return par;
	return Fib(par - 1) + Fib(par - 2);
}

constexpr int Num(int par)
{
	if (10 == par)
		return 5;
	return 7;
}


int main()
{
	int arr[5] = { 0 };
	for (unsigned int i = 0; i < 5; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << "\n";
	cout << "____________________________________________________\n";
	constexpr int a = Fib(5);
	int arr1[a] = { 0 };
	for (unsigned int i = 0; i < a; i++)
	{
		cout << arr1[i] << '\t';
	}
	cout << "\n";
	cout << "____________________________________________________\n";
	constexpr int b = Factorial(3);
	int arr2[b] = { 0 };
	for (unsigned int i = 0; i < b; i++)
	{
		cout << arr2[i] << '\t';
	}
	cout << "\n";
	cout << "____________________________________________________\n";
	constexpr int c = Num(3);
	int arr3[c] = { 0 };
	for (unsigned int i = 0; i < c; i++)
	{
		cout << arr3[i] << '\t';
	}
	cout << "\n";
	cout << "____________________________________________________\n";
	return 0;
}