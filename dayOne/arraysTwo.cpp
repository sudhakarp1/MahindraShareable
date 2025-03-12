#include <iostream>
using namespace std;

int main()
{
	const int length1 = 10;
	const int length2 = 5;
	int arr[length1][length2] = { 0 };

	for (unsigned int i = 0; i < length1; i++)
	{
		for (unsigned int j = 0; j < length2; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << "\n";
	}
	cout << "____________________________________________________\n";

	return 0;
}