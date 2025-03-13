#include<iostream>
using namespace std;



int main1()
{
	const char* ch = "India is great";
	//int* buffer = (int*)ch;//C-style casting
	const int* buffer = reinterpret_cast<const int*>(ch);//forced cast
	cout << "Buffer=" << buffer << '\n';
	cout << (const char*)buffer << '\n';

	return 0;
}

class CA
{
public:
	void fun()
	{
		cout << "CA::Fun\n";
	}
};

class CB :public CA
{
public:
	void fun()
	{
		cout << "CB::Fun\n";
	}
};

class CC :public CB
{
public:
	void fun()
	{
		cout << "CC::Fun\n";
	}
};


int main()
{
	double d=3.141;
	short s = static_cast<short>(d);

	cout << "d=" << d << '\n';
	cout << "s=" << s << '\n';

	CC* cc = new CC();
	cc->fun();
	CA* ca = static_cast<CA*>(cc);
	ca->fun();
	return 0;
}