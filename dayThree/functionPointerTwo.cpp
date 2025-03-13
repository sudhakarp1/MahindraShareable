#include <iostream>
using namespace std;

void fun();
void funOne();

void funCaller(void (*)());

int main() {
	funCaller(fun);
	funCaller(funOne);
}

void funCaller(void (*fptr)()) {
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
