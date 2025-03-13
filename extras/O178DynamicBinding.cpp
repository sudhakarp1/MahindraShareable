#include<iostream>
using namespace std;

class CA
{
public:
	CA()//set_vptr(CA::`vftable')
	{
	}
	virtual void fun1()
	{
		cout << "CA::fun1\n";
	}
	~CA()
	{//set_vptr(CA::`vftable')
	}
};

class CB:public CA
{
public:
	CB()//1) CA::CA() 2) set_vptr(CB::`vftable')
	{
	}
	virtual void fun1()
	{
		cout << "CB::fun1\n";
	}
	~CB()
	{//1) set_vptr(CB::`vftable')
	}//1)CA::~CA
};


int main()
{
	CB obj;
	/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	??0CB@@QAE@XZ				; CB::CB
	*/

	CA& caRef = obj;
	caRef.fun1();//caRef.vptr->vtable[0]()
	//caRef.CA::CA();
	caRef.fun1();//caRef.vptr->vtable[0]()

	CA* caPtr = &obj;
	caPtr->fun1();//caPtr.vptr->vtable[0]()
	caRef.CA::~CA();
	caPtr->fun1();//caPtr.vptr->vtable[0]()
	return 0;//CB::~CB()
}