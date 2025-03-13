#include<iostream>
using namespace std;
class CA
{
	int x;
	int y;
	CA(int x = 0, int y = 0) :x(x), y(y)
	{
		cout << "Ctor x=" << x << " , y=" << y << '\n';
	}
	~CA()
	{
		cout << "CA D-tor\n";
	}
public:
	void Display()
	{
		cout << "Display x=" << x << " , y=" << y << '\n';
	}
	friend class Wrapper;
};

class Wrapper//Smart Pointer
{
	static void* operator new(size_t) = delete;
	static void* operator new[](size_t) = delete;
	static void operator delete(void*) = delete;
	static void operator delete[](void*) = delete;
	CA* pt;
public:
	Wrapper(int x = 0, int y = 0) :pt(new CA(x, y))
	{
	}
	CA* operator->()//CA* returnCaAddress()
	{
		return pt;
	}
	~Wrapper()
	{
		delete pt;
	}
};

int main()
{
	Wrapper w1(10, 20);
	w1->Display();//w1.operator->()->Display();//w1.returnCaAddress()->Display();
	return 0;
}