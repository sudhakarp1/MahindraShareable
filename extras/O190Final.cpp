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

	class CB :public CA
	{
	public:
		void fun() override
		{
			cout << "CB::Fun\n";
		}
	};

	class CC :public CB
	{
	public:
		void fun() override final
		{
			cout << "CC::Fun\n";
		}
	};

	class CD final :public CC
	{
	public:
		//void fun() override //error override not permitted
		//void fun()  //error override not permitted
		void fun1()  
		{
			cout << "CD::Fun\n";
		}
	};

	class CE //:public CD //inheritance suppressed with final keyword in class CD
	{
	public:
		void fun1()
		{
			cout << "CE::Fun\n";
		}
	};
	

	int main()
	{
	
		return 0;
	}
