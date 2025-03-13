#include <iostream>
using namespace std;

class CA {
public:
	virtual void fun() { cout << "CA::fun()...\n"; }
};
class CB:public CA {
public:
	void fun() { cout << "CB::fun()...\n"; }
};

int main() {
	CA* caPtr, ca;
	CB cb;
	caPtr = &ca;
	caPtr->fun(); //statment (1) //CA::fun();
	caPtr = &cb;
	caPtr->fun(); //statment (2)//CB::fun();
}