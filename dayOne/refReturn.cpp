#include<iostream>
using namespace std;

int i = 100;

int getI()//returns a value
{
	return i;
}

int& getIRef()//returns the reference
{
	return i;
}

int* GetIPtr()//returns the address
{
	return &i;
}

int main()
{
	int i = 200;
	cout << "i=" << i << '\n';
	cout << "::i=" << ::i << '\n';
	cout << "________________________________\n";
	cout << "i=" << getI() << '\n';
	cout << "i=" << getIRef() << '\n';
	cout << "&i=" << GetIPtr()<<"\t:i= " <<*GetIPtr()<< '\n';
	cout << "________________________________\n";
	return 0;
}
