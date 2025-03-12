#include <iostream>
using namespace std;

class CA {
public:
	CA(int par = 10) { cout << "CA(int = 10)\n"; }
	~CA() { cout << "~CA()\n"; }
	CA(CA& par) { cout << "copy Ctor CA()\n"; }
};

int main() {
	CA obj = 100; //parameterized ctor
	CA obj2 = obj; //copy ctor called
}
