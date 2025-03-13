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
	cout << "_______CA& on CB object____________\n";
	//LSP(liskov substitution principle)
	CA& caRef = objCb;//base class ref/pointer/object can be substituted by derived class objects
	caRef.CADisplay();
	caRef.Show();//CA::show
	cout << "_______CA* on CB object____________\n";
	CA* caPtr = &objCb;
	caPtr->CADisplay();
	caPtr->Show();//CA::show
	cout << "_______________________________________\n";
	return 0;
}
