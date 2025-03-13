#include<iostream>
using namespace std;
/*
[overload operators]
+,-,*,/ ==> Binary operator
-,&,* => Unary Operators
comma,->,(),->*,[],=,<<,>>
new , delete ,new[],delete[]

[Operators that cannot be overloaded]
.,.*,::,::*,..., ?:,

*/

class CA
{
	int x;
	int y;
	CA(int x = 0, int y = 0) :x(x), y(y)
	{
		cout << this << " Ctor x=" << x << " , y=" << y << '\n';
	}
	~CA()
	{
		cout << this << " CA D-tor x=" << x << " , y=" << y << '\n';
	}
public:
	void Display()
	{
		cout << this << " Display x=" << x << " , y=" << y << '\n';
	}
	friend class Wrapper;
};

class Wrapper//Smart Pointer
{
	static void* operator new(size_t) = delete;
	static void* operator new[](size_t) = delete;
	static void operator delete(void*) = delete;
	static void operator delete[](void*) = delete;
	Wrapper(const Wrapper&) = delete;
	Wrapper& operator=(const Wrapper&) = delete;
public:
	Wrapper(int x = 0, int y = 0) :pt(new CA(x, y))
	{
		cout << this << " Wrapper ctor pt=" << pt << " and &pt=" << &pt << " and &count=" << &count << '\n';
	}
	CA* operator->()
	{
		return pt;
	}
	CA** operator&()
	{
		return &pt;
	}
	CA& operator*()
	{
		return *pt;
	}
	~Wrapper()
	{
		delete pt;
	}
private:
	int count;
	CA* pt;
};

int main()
{
	cout << "________W1_________________\n";
	Wrapper w1(10, 20);
	w1->Display();
	cout << "&w1=" << &w1 << '\n';
	(*w1).Display();
	cout << "_________________________\n";
	return 0;
}
