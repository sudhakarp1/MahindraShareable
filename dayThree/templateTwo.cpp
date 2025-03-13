#include <iostream>
using namespace std;

template <typename Type>
void fun(Type x) {
	cout <<typeid(Type).name()<< "\t\tX: " << x << endl;
} 
int main() {
	fun(10);
	fun(10.345f);
	fun(10.345);
	fun('a');
	fun("hello testing...");
	fun(string("string class object"));
}
