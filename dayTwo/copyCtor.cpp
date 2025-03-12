#include<iostream>
#include<cstring>
using namespace std;


class CA {
public:
	CA() :size(MAX){ memset(arr, 0, size * sizeof(int)); }
	CA(int sz) :size(sz) {
		for (auto i = 0; i < size; ++i)
			arr[i] = 101 + i;
	}
	~CA(){
		memset(arr, 0, size * sizeof(int));
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
	static const int MAX = 100;
	int arr[MAX];	
};


int main() {
	CA obj = 20;
	obj.disp();

	CA obj2 = obj;//copy ctor 
	obj2.disp();
}
