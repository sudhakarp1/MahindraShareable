#include <iostream>
using namespace std;

int main()
{
	const int length = 10;
	int arr[length] = { 0 };
	
	for (unsigned int i = 0; i < length; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";
	cout << "__________________________________________________\n";

	for (int i: arr) //range based for loop 
		cout << i << "  ";
	cout << "\n";
	return 0;
}


