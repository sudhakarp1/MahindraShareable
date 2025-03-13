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
		cout << "CA D-tor x=" << x << " , y=" << y << '\n';
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
	Wrapper(const Wrapper&) = delete;
	Wrapper& operator=(const Wrapper&) = delete;

public:
	Wrapper(int x = 0, int y = 0) :pt(new CA(x, y))
	{
	}
	CA* operator->()
	{
		return pt;
	}
	~Wrapper()
	{
		delete pt;
	}
private:
	CA* pt;
};

int main()
{
	cout << "________W1_________________\n";
	Wrapper w1(10, 20);
	w1->Display();
	cout << "________W2_________________\n";
	Wrapper w2(11, 22);
	w2->Display();
	cout << "________W3_________________\n";
	Wrapper w3(88, 77);
	w3->Display();
	cout << "_________W4________________\n";
	//Wrapper w4 = w1 ;
	//w4->Display();
	cout << "_________________________\n";
	//w2 = w3;
	cout << "_________________________\n";
	return 0;
}