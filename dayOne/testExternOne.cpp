#include <iostream>
using namespace std;

extern "C" void funOne();

extern "C" void fun() {
	funOne();
	cout << "Inside extern C fun() \n";
}
void funThree() {
	cout << "Complete C++ function... \n";
}

int main() {
	cout << "In main... calling fun()" << endl;
	fun();
}