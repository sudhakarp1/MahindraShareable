#include <iostream>
using namespace std;

class CA{
	void disp() {
		cout << "X: " << x << "\tY: " << y << endl;
	}
	CA(int x=10):x(x), y(x){}
	int x, y;
	friend int main();
};
int main() {
	CA a, b = 100;

	a.disp();
	b.disp();
}