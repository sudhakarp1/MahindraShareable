#include <iostream>
using namespace std;

template <typename Type>
void fun(Type x) {
	cout << typeid(Type).name() << "\t\tX: " << x << endl;
}

void fun(int x) {
	cout << "Integer version: " << x << endl;
}
int main() {
	fun<int>(10); //explicit calling
	fun<int>(10.34); 
	fun(20); //implicit calling

	fun<double>(10.345);

	fun<string>("value is being passed");
	string one = "some string here";
	one += " adding some more";
	string two;
	two = one;
	cout<<"one: " << one << "\ttwo: " << two << endl;
}
