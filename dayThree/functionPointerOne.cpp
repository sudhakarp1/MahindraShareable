#include <iostream>
using namespace std;

void fun();
void funOne();

int main() {
	void (*fptr)();

	fptr = fun;
	fptr();// statment (1)

	fptr = &funOne;
	fptr();// statment (2)
}

void fun() {
	cout << "void fun() called..." << endl;
}
void funOne() {
	cout << "void funOne() called..." << endl;
}
