#include<iostream>
using namespace std;

struct CA {
	CA() {
		cout << "CA Ctor\n";
	}
};

struct Contained {
	Contained() {
		cout << "Contained Ctor\n";
	}
};

struct CB : CA {
	CB() {
		cout << "CB Ctor\n";
	}
private:
	Contained ctnd;
};

int main()
{
	CB obj2;
	return 0;
}
