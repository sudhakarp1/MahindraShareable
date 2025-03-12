#include <iostream>

int x = 100;
void fun();

namespace Mine{
	int x = 99;
	void fun();

	namespace SomeName {
		int x = 88;
	}
}
namespace Yours {
	int x = 990;
	void fun();
}
using std::cout;
using std::endl;


int main() {
	int x = 50;
	fun();
	cout << "Hello World!..." << x << " and " << ::x << endl;
	std::cout << "Accessing Mine var x: " << Mine::x << std::endl;
	Mine::fun();
	Yours::fun();
	namespace MM = Mine::SomeName;//aliasing namespace 
	std::cout << MM::x << std::endl;

}

void fun() {
	std::cout << "fun() with "<< x << std::endl;
}
void Mine::fun() {
	std::cout << "Mine::fun() with " << x << std::endl;
}
void Yours::fun() {
	std::cout << "Yours::fun() with " << x << std::endl;
}