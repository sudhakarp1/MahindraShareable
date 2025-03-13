#include <iostream>
using namespace std;

int Add(int, int);
int Sub(int, int);
int Multi(int, int);
int Divi(int, int);
int Modu(int, int);

using FPTR = int (*)(int, int);

int calculate(FPTR, int, int);

int main() {
	FPTR arr[] = { Add, Sub, Divi, Modu, Multi, Add, Sub};
	/*
	for (auto funct: arr)
		cout << "Calcuting : " << calculate(funct, 10, 20) << endl;

	for (int i = 0; i < 7; ++i)
		cout << "Calcuting : " << calculate(arr[i], 100, 20) << endl;
	*/

	for (FPTR funct : arr)
		cout << "Calcuting : " << calculate(funct, 100, 20) << endl;
}

int calculate(FPTR  fptr, int x, int y) {
	return fptr(x, y);
}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Multi(int x, int y) {
	return x * y;
}
int Divi(int x, int y) {
	return x / y;
}
int Modu(int x, int y) {
	return x % y;
}