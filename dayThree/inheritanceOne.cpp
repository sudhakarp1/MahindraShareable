#include<iostream>
using namespace std;

class CA
{
public:
	void CADisplay()
	{
		cout << "CA Display\n";
	}
};

//inheritance(one class aquiring properties of another class)
class CB :public CA
{
public:
	void CBDisplay()
	{
		cout << "CB Display\n";
	}
};

int main()
{
	cout << "________CB Object___________\n";
	CB objCb;
	objCb.CADisplay();
	objCb.CBDisplay();
	cout << "___________________\n";
	return 0;
}