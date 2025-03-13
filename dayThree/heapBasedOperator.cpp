#include<iostream>
using namespace std;

class CA
{
	int x;
public:
	CA()
	{
		cout << "CA::Ctor\n";
	}
	~CA()
	{
		cout << "CA::D-tor\n";
	}
	 void* operator new(unsigned int size)
	{
		cout << "CA::Operator New(" << size << ")\n";
		return malloc(size);
	}
	 void operator delete(void* pv)
	{
		cout << "CA::Operator Delete()\n";
		free(pv);
	}
	 void* operator new[](unsigned int size)
	{
		cout << "CA::Operator New[](" << size << ")\n";
		return malloc(size);
	}
		 void operator delete[](void* pv)
	{
		cout << "CA::Operator Delete[]()\n";
		free(pv);
	}
};

int main()
{
	CA* obj1 = new CA();
	cout << "_________________________\n";
	delete obj1;
	cout << "_________________________\n";
	CA* obj2 = new CA[4];
	cout << "_________________________\n";
	delete [] obj2;
	cout << "_________________________\n";
	return 0;
}