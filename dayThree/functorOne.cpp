#include <iostream>
using namespace std;

class CA {
	int data;
public:
	CA(int x = 0) :data(x) {}

	void operator()() {
		cout << "operator () is called" << endl;
	}
	void operator()(int x) {
		cout << "operator (int) is called" << endl;
	}
};
void funCaller(CA& a) {
	cout << "Job starting..." << endl;
	a(); //call back
	cout << "Job Completed..." << endl;
}

int main() {
	CA a = 10;
	funCaller(a);
}