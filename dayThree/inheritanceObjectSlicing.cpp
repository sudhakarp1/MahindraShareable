#include<iostream>
using namespace std;

class CA
{
public:
	int i;
	int j;
	CA(int i, int j) :i(i), j(j)
	{
	}
	void Display()
	{
		cout << "________________CA::Display_______________\n";
		cout << "i  = " << i << '\n';
		cout << "j  = " << j << '\n';
	}
};

class CB :public CA
{
public:
	int a;
	int b;
	CB(int i, int j, int a, int b) :a(a), b(b), CA(i, j)
	{
	}
	void Show()
	{
		cout << "________________CB::Show_______________\n";
		cout << "i  = " << i << '\n';
		cout << "j  = " << j << '\n';
		cout << "a  = " << a << '\n';
		cout << "b  = " << b << '\n';
	}
};

int main()
{
	CA obj1(10, 20);
	obj1.Display();
	obj1.i = 111;
	obj1.j = 222;
	obj1.Display();
	cout << "*****************************\n";
	CB obj2(11, 22, 33, 44);
	obj2.Show();
	cout << "*****************************\n";
	obj1 = obj2; //object slicing 
	obj1.Display();
	cout << "*****************************\n";
	CA& caRef = obj2;
	caRef.i = 999;
	caRef.j = 888;
	caRef.Display();
	obj2.Show();
	cout << "*****************************\n";
	CA* caPtr = &obj2;
	caPtr->i = 777;
	caPtr->j = 666;
	caPtr->Display();
	obj2.Show();
	return 0;
}