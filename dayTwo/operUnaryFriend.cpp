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
	friend Integer operator++(Integer &obj, int) {
		Integer temp(obj);
		obj.num++;
		return temp;
	}
};
int main() {
	Integer x = 10, y;
	x.disp();
	cout << "--------------------------------------\n";
	y = x++; //y = operator++(x, 0);
	x.disp();
	y.disp();
	cout << "--------------------------------------\n";
	y = ++x;//y = operator++(x);
	x.disp();
	y.disp();
	cout << "--------------------------------------\n";
}