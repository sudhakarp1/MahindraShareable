#include <iostream>
using namespace std;

class Integer {
	int num;
public:
	Integer(int num = 0) : num(num) {}
	void disp() {
		cout << "num: " << num << endl;
	}
	friend Integer& operator++(Integer& obj) {
		obj.num++;
		return obj;
	}
	friend Integer operator++(Integer& obj, int) {
		Integer temp(obj);
		obj.num++;
		return temp;
	}
	friend Integer operator+(const Integer& lhs,const Integer& rhs) {
		return Integer(lhs.num + rhs.num);
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
	Integer a = 10, b = 20, c = 30;
	Integer d = a + b + c + a;
	d.disp();
}