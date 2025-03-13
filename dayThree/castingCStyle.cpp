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

class Shape :public ICircle, public IRect
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


int main1()
{
	ICircle* circle = new Shape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = (IRect*)circle;
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}


int main2()
{
	ICircle* circle = new Shape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = (IRect*)circle;
	rect++;//move by 4 bytes
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}

int main3()
{
	ICircle* circle = new Shape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = (IRect*)(Shape*)circle;//upcast and downcast
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}


int main4()
{
	ICircle* circle = new Shape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = (Shape*)circle;//Derived to base implicit casting
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}


int main5()
{
	ICircle* circle = new Shape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = dynamic_cast<IRect*>(circle);//polymorphic cast
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}


ICircle* CreateShape()
{
	return new Shape();
}

int main()
{
	ICircle* circle = CreateShape();
	cout << "circle=" << circle << '\n';
	circle->Area();//circle->vptr->vtable[0]()
	circle->Circumference();//circle->vptr->vtable[1]()
	cout << "__________________________\n";
	IRect* rect = dynamic_cast<IRect*>(circle);//polymorphic cast
	cout << "rect=" << rect << '\n';
	rect->Length();//rect->vptr->vtable[0]()
	rect->Perimeter();//rect->vptr->vtable[1]()
	return 0;
}