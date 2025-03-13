#include<iostream>
using namespace std;

class CA {
public:
	void CADisplay()
	{
		cout << "CA Display\n";
	}
	void Show()
	{
		cout << "CA Show\n";
	}
};

class CB :public CA {
public:
	void CBDisplay()
	{
		cout << "CB Display\n";
	}
	void Show()//function hiding
	{
		cout << "CB Show\n";
	}
};

int main() {
	cout << "________CB Object___________\n";
	CB objCb;
	objCb.CADisplay();
	objCb.CBDisplay();
	objCb.Show();//CB::Show
	objCb.CA::Show();//CA::Show
}
