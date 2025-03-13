#include <iostream>
using namespace std;

template <typename T>
class CA {
	T data;
public:
	CA(T x = T());
	void disp();
};

int main() {
	CA<int> iObj(100);
	iObj.disp();

	CA <int> iObj2 = 200;
	iObj2.disp();

	CA<double> dObj = 23.345;
	dObj.disp();
}

template <typename T>
CA<T>::CA(T x): data(x) {
}

template <typename T>
void CA<T>::disp() {
	cout << typeid(T).name() << "\tdata: " << data << endl;
}