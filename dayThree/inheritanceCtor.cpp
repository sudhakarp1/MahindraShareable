#include<iostream>
using namespace std;

class CA {
public:
	CA() 	{
		cout << "CA Ctor\n";
	}
};

class Contained {
public:
	Contained() 	{
		cout << "Contained Ctor\n";
	}
};

class CB :public CA {
	Contained ctnd;
public:
	CB() 	{
		cout << "CB Ctor\n";
	}
};

int main()
{
	CB obj2;
	return 0;
}
