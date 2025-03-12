#include <iostream>
using namespace std;

int main() {
	/*int* ptr;
	ptr = new int;
	*ptr = 10;*/

	int* ptr = new int(10);
	cout << "ptr: " << ptr << "\t\t*ptr: " << *ptr << endl;
	delete ptr;
}