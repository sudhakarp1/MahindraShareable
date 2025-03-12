#include <iostream>
using namespace std;

class Integer {
	int num;
public:
	Integer(int num = 0) : num(num) {}
	void disp() {
		cout << "num: " << num << endl;
	}
	void operator++() { //prefix
		cout << "Pre-fix notation called\n";
		num++;
	}
	void operator++(int) { //postfix
		cout << "Post-fix notation called\n";
		num++;
	}
};
int main() {
	Integer x = 10;
	x.disp();
	x++; //x.operator++(0);
	x.disp();
	++x;//x.operator++();
	x.disp(); 
}