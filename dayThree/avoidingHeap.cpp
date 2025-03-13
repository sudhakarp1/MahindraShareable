#include<iostream>
using namespace std;

class CA
{
	int x;

public:
	static void* operator new(unsigned int size) = delete;
	static void operator delete(void* pv) = delete;
	static void* operator new[](unsigned int size) = delete;
	static void operator delete[](void* pv) = delete;

	CA()
	{
		cout << "CA::Ctor\n";
	}
	~CA()
	{
		cout << "CA::D-tor\n";
	}
};

int main()
{
	/*CA* obj1 = new CA();
	cout << "_________________________\n";
	delete obj1;

	cout << "_________________________\n";
	CA* obj2 = new CA[3];
	cout << "_________________________\n";
	delete[] obj2;
	cout << "_________________________\n";
	*/

	CA obj1; //local/stack  object
	return 0;
}