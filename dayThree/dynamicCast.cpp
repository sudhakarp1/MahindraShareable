#include<iostream>
using namespace std;


class CA
{
public:
	virtual void fun()
	{
		cout << "CA::Fun\n";
	}
};

class CB:public CA
{
public:
	void fun()
	{
		cout << "CB::Fun\n";
	}
};

class CC :public CB
{
public:
	void fun()
	{
		cout << "CC::Fun\n";
	}
};

class CD :public CC
{
public:
	void fun()
	{
		cout << "CD::Fun\n";
	}
};


CA* Factory()
{
	//return new CA();
	//return new CB();
	return new CC();
	//return new CD();
	//return NULL;
}

int main()
{
	CA* ptCa = Factory();
	if (ptCa != NULL)
	{
		cout << "Using CA pointer : ";
		ptCa->fun();
	}

	CB* ptCb =dynamic_cast<CB*>(ptCa);//returns null on improper casts
	if (ptCb != NULL)
	{
		cout << "Using CB pointer : ";
		ptCb->fun();
	}
	else
	{
		cout << "CB* casting Failed\n";
	}

	CC* ptCc = dynamic_cast<CC*>(ptCa);//returns null on improper casts
	if (ptCc != NULL)
	{
		cout << "Using CC pointer : ";
		ptCc->fun();
	}
	else
	{
		cout << "CC* casting Failed\n";
	}
	CD* ptCd = dynamic_cast<CD*>(ptCa);//returns null on improper casts
	if (ptCd != NULL)
	{
		cout << "Using CD pointer : ";
		ptCd->fun();
	}
	else
	{
		cout << "CD* casting Failed\n";
	}
	return 0;
}