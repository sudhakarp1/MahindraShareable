#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal::C-tor\n";
	}
	Animal(int x)
	{
		cout << "Animal(int)::C-tor\n";
	}
	~Animal()
	{
		cout << "~Animal::D-tor\n";
	}
};

class Eye
{
public:
	Eye()
	{
		cout << "Eye::C-tor\n";
	}
	Eye(int)
	{
		cout << "Eye(int)::C-tor\n";
	}
	~Eye()
	{
		cout << "~Eye::D-tor\n";
	}
};

class Tiger :public Animal
{
	Eye eyes;
public:
	Tiger()
	{
		cout << "Tiger::C-tor\n";
	}
	Tiger(int x) : Animal(x), eyes(x)
	{
		cout << "Tiger(int)::C-tor\n";
	}
	~Tiger()
	{
		cout << "~Tiger::D-tor\n";
	}
};


int main()
{
	Tiger tiger(100);
	cout << "______________________\n";
	return 0;
}