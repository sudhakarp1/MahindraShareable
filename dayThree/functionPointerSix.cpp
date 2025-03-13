#include <iostream>
using namespace std;

int Add(int, int);
int Sub(int, int);
using FPTR = int (*)(int, int);

int calculate(FPTR, int, int);

int main() {
	cout << "Adding : " << calculate(Add, 10, 20) << endl;
	cout << "Subtracting : " << calculate(Sub, 100, 20) << endl;
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