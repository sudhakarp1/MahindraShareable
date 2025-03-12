#include <iostream>
using namespace std;

int main() {
	int row , col ;
	cout << "Enter row and col size :";
	cin >> row >> col;

	int** arr = new int *[row];
	for (int i=0; i < row; ++i)
		arr[i] = new int[col];
	int num = 1;
	for (int i=0; i < row; ++i)
		for (int j=0; j < col; ++j)
			arr[i][j] = num++;

	for (int i=0; i < row; ++i) {
		for (int j=0; j < col; ++j)
			cout << arr[i][j] << "  ";
		cout << "\n";
	}
	for (int i=0; i < row; ++i)
		delete[]arr[i];
	delete[]arr;

}