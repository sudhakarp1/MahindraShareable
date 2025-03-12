#include<iostream>
#include<cstring>
using namespace std;

class CA {
public:
	CA() :size(1), arr(new int(101)) { }
	CA(int sz) :size(sz), arr(new int[size]) {
		for (auto i = 0; i < size; ++i)
			arr[i] = 101 + i;
	}

	CA(CA& par) :size(par.size), arr(new int[size]) {
		memcpy(arr, par.arr, size * sizeof(int));
	}
	~CA() {
		delete[]arr;
		arr = nullptr;
		size = 0;
	}
	void disp() {
		cout << "Size: " << size << "\t\tArr: ";
		for (auto i = 0; i < size; ++i)
			cout << arr[i] << "  ";
		cout << endl;
	}
private:
	int size;	
	int *arr;
};


int main() {
	CA obj = 20;
	obj.disp();
	{
		CA obj2 = obj;//copy ctor 
		obj2.disp();
	} //obj2 goes out of scope
	obj.disp();
}
