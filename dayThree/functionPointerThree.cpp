#include <iostream>
using namespace std;


void fun();
void funOne();
typedef void (*FPTR)();
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
