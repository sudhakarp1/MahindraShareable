#include <iostream>
using namespace std;

class Integer {
	int num;
public:
	Integer(int num = 0) : num(num) {}
	void disp() {
		cout << "num: " << num << endl;
	}
	Integer& operator++() { //prefix
		num++;
		return *this;
	}
	Integer operator++(int) { //postfix
		Integer temp(*this);
		num++;
		return temp;
	}
};
int main() {
	Integer x = 10, y;
	x.disp();
	cout << "--------------------------------------\n";
	y = x++; //y = x.operator++(0);
	x.disp();
	y.disp();
	cout << "--------------------------------------\n";
	y = ++x;//y = x.operator++();
	x.disp();
	y.disp();
	cout << "--------------------------------------\n";
}