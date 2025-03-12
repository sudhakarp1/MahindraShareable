#include <iostream>
using namespace std;

void fun(int = 1, int = 2);//default values
int main() {
	fun();// fun(1,2);
	fun(10);//fun(10, 2);
	fun(100, 300); //
}
void fun(int x, int y) {
	cout << "X: " << x << "\tY: " << y << endl;
}
