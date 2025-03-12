#include <iostream>
using namespace std;

class Integer {
	int num;
public:
	Integer(int num = 0) : num(num) {}
	void disp() {
		cout << "num: " << num << endl;
	}
	Integer operator +(const Integer& rhs) { //res = x + y
		return Integer(this->num + rhs.num);
	}//res = x.operator+(y); 

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
	y = x++ + ++x + x++; 
	x.disp();
	y.disp();
	cout << "--------------------------------------\n";	
}