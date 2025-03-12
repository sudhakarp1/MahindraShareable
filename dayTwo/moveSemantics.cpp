#include <iostream>
using namespace std;
void fun(int&& ref) {//rvalue reference
	cout << "inside fun()..." << ref << endl;
}
int funTwo(int &ref) {//lvalue reference
	return ref;
}
int main() {
	int var = 10;
	fun(20);
	fun(move(var));
	fun(funTwo(var));
	cout << "Var: " << var << endl;
}