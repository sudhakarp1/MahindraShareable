#include <iostream>
using namespace std;

class CA {
	void disp() {
		cout << "X: " << x << "\tY: " << y << endl;
	}
	CA(int x = 10) :x(x), y(x) {}
	~CA() {}
	int x, y;
	friend class CB;
};

class CB {
	CA* ptr;
public:
	CB(int x = 100) : ptr(new CA(x)) {}
	void disp() {
		ptr->disp();
	}
	~CB() { delete ptr; }
};


int main() {
	CB a = 9999;
	a.disp();	
}