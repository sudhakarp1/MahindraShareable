#include <iostream>
using namespace std;

class CA {
public:
	virtual void fun() { cout << "CA::fun()...\n"; }
	virtual void funOne() { cout << "CA::funOne()...\n"; }
	virtual void funTwo() { cout << "CA::funTwo()...\n"; }
};
class CB :public CA {
public:
	void fun() { cout << "CB::fun()...\n"; }
	//void funOne() { cout << "CB::funOne()...\n"; }
	void funTwo() { cout << "CB::funTwo()...\n"; }
};

int main() {
	CA* caPtr;
	CA ca; CB cb;
	caPtr = &cb;
	caPtr->fun();
	caPtr->funOne();
	caPtr->funTwo();
}


using FPTR = void (*)();
int main1() {
	CA ca; CB cb;
	long* vptr;
	FPTR *vtble;

	vptr = (long*)&cb;
	vtble = (FPTR *)(*vptr);
	vtble[0]();
	vtble[1]();
	vtble[2]();

	return 0;
}