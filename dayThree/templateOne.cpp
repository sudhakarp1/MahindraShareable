#include <iostream>
using namespace std;

void fun(int);
void fun(float);
void fun(double);
void fun(char );
void fun(const char *);
void fun(string);

int main() {
	fun(10);
	fun(10.345f);
	fun(10.345);
	fun('a');
	fun("hello testing...");
	fun(string("string class object"));
}


void fun(int x){
	cout << "x: " << x << endl;
}
void fun(float x) {
	cout << "x: " << x << endl;
}
void fun(double x) {
	cout << "x: " << x << endl;
}
void fun(char x) {
	cout << "x: " << x << endl;
}
void fun(const char* x) {
	cout << "x: " << x << endl;
}
void fun(string x) {
	cout << "x: " << x << endl;
}
