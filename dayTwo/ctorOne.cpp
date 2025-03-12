#include<iostream>
using namespace std;

class CA {
public:
	CA() :x(0), y(x), z(y) //initializer list
	{
		//x = 0; y = x; z = y; //assignment
	}
	explicit CA(int par) :x(par), y(x), z(y) //initializer list
	{ 
	}
	
	CA(int par1, int par2) :x(par1), y(par2), z(y) //initializer list
	{
	}
	~CA(){
	}
	void display() {
		cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
	}
private:
	const int x;
	mutable int y;
	int z;
};


int main() {
	CA obj{100,200};// explicit call 
	CA obj1(10), obj2;//CA obj1 = 10; //implicit 
	const CA obj3{10,20};
	obj.display();
}


