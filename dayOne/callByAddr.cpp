#include <iostream>
using namespace std;

void change(int x) {
	x += 100;
}

int main() {
	int var = 100;
	cout << "Before var: " << var << endl;
	change(var);
	cout << "After var: " << var << endl;
}