#include <iostream>
using namespace std;

int main() {
	int x, pi;
	/*
	auto funct = []() {cout << "Hello Lambda...\n"; };
	funct();
	*/
	[]() {cout << "Hello Lambda...\n"; }();
}