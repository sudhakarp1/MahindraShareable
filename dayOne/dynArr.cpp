#include <iostream>
using namespace std;

int main() {
	int* ptr = new int[10];
	for (unsigned int i = 0; i < 10; ++i)
		ptr[i] = 101 + i; //*(ptr+i) = 101 + i

	for (unsigned int i = 0; i < 10; ++i)
		cout << *(ptr + i) << "  ";
	cout << endl;
	cout << "ptr: " << ptr << endl;
	delete[]ptr; 
	ptr = nullptr;
	cout << "ptr: " << ptr << endl;
}