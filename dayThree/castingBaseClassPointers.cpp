#include<iostream>
using namespace std;

class ICircle
{
public:
	virtual void Area() = 0;
	virtual void Circumference() = 0;
};

class IRect
{
public:
	virtual void Length() = 0;
	virtual void Perimeter() = 0;
};

class Shape:public ICircle,public IRect
{
public:
	void Area()  override
	{
		cout << "Circle::Area\n";
	}
	void Circumference() override
	{
		cout << "Circle::Circumference\n";
	}
	void Length() override
	{
		cout << "Rect::Length\n";
	}
	void Perimeter() override
	{
		cout << "Rect::Perimeter\n";
	}
};


int main()
{
	ICircle* circle = new Shape();
	circle->Area();
	circle->Circumference();
	cout << "__________________________\n";
	IRect* rect = (IRect*)circle;
	rect->Length();
	rect->Perimeter();
	return 0;
}