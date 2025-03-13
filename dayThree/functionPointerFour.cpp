#include <iostream>
using namespace std;

void fun();
void funOne();

using FPTR = void (*)(); //Modern C++ --> C++11 onwards
void funCaller(FPTR);

int main() {
	funCaller(fun);
	funCaller(funOne);
}

void funCaller(FPTR fptr) {
	cout << "Starting job" << endl;
	fptr();//callback
	cout << "Job Completed" << endl;
}
void fun() {
	cout << "void fun() called..." << endl;
}
void funOne() {
	cout << "void funOne() called..." << endl;
}
