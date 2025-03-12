#include <iostream>
using namespace std;

int Num(int par)
{
	if (10 == par)
		return 13;
	return 19;
}
enum Color
{
	Red=0, Blue=1, Green=2
};

Color ReturnColor(){
	cout << "Enter a num:";
	int num;
	cin >> num;
	if (num == 0)
		return Color::Red;
	else if (num == 1)
		return Color::Blue;
	else 
		return Color::Green;
	
}

int main()//if-init and switch init (modern c++)
{

	if (int val = Num(10); val < 15)
	{
		cout << " You are too young to play at " << val << '\n';
	}
	else if (val < 20)
	{
		cout << " You are about right to play at " << val << '\n';
	}
	else
	{
		cout << " You are too old to start play at " << val << '\n';
	}
	switch (Color color = ReturnColor(); color)
		{
		case Red:
			cout << "Red is the choice\n";
			break;
		case Blue:
			cout << "Blue is the choice\n";
			break;
		case Green:
			cout << "Green is the choice\n";
			break;
		default:
			cout << "No color  choice\n";
			break;
		}	
	return 0;
}