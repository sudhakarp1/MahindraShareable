#include <iostream>
using namespace std;

template <typename T>
class CA {
	T data;
public:
	CA(T x = T()) : data(x) {}
	void disp() {
		cout << typeid(T).name() << "\tdata: " << data << endl;
	}
};

template <>
class CA<int> {
	int data;
public:
	CA(int x = int()) : data(x) { cout << "Int version\n"; }
	void disp() {
		cout << typeid(int).name() << "\tdata: " << data << endl;
	}
};

int main() {
	CA<int> iObj(100);
	iObj.disp();

	CA <int> iObj2 = 200;
	iObj2.disp();

	CA<double> dObj = 23.345;
	dObj.disp();
}