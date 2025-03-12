#include <iostream>
#include <cstdlib>
using namespace std;

class CA {
	int x;
	int y;
public:
	CA() :x(0), y(0) {
			cout << this << " CA default\n";
	}
	CA(int x, int y) :x(x), y(y) {
		cout << this << " CA Param (int,int)\n";
	}
	CA(const CA& par) :x(par.x), y(par.y) {
		cout << this << " CA Copy\n";
	}
	~CA() {
		cout << this << " CA Dtor\n";
	}
};

int mainRename() {
	CA* obj = (CA*)malloc(sizeof(CA));
	obj->CA::CA(1, 2);

	cout << "_______________________________\n";
	obj->CA::~CA();//calling dtor doeas not release the object [ Just a function call ]
	free(obj);//release the object
	//cout << "&obj=" << &obj << "\tobj=" << obj << '\n';
	return 0;
}

int main() {
	CA* obj = new CA(1, 2);
	/*
	call	??2@YAPAXI@Z				; operator new (calls malloc)
	call	??0CA@@QAE@HH@Z				; CA::CA
	*/
	cout << "_______________________________\n";
	delete obj;
	/*
	call	??1CA@@QAE@XZ				; CA::~CA
	call	??3@YAXPAXI@Z				; operator delete(calls free)
	*/
	//cout << "&obj=" << &obj << "\tobj=" << obj << '\n';
	return 0;
}