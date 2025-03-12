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
	friend Integer operator+(const Integer& lhs, const Integer& rhs) {
		return Integer(lhs.num + rhs.num);
	}
	friend ostream& operator<<(ostream& out, const Integer& rhs) {
		out << rhs.num;
		return out;
	}
};
int main() {
	Integer x = 10, y;
	//cout<<x<<endl;//operator(operator<<(cout, x), endl);
	//cout << "--------------------------------------\n";
	y = x++ + ++x + x++;
	cout << "X: " << x <<"\t\tY: " << y<< endl;
}