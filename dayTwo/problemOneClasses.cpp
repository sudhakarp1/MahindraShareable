#include <iostream>
using namespace std;
class MagicNumbers
{
public:
	//behavior
	void SetLimit(int ll, int ul)
	{
		lowerLimit = ll;
		upperLimit = ul;
	}
	void Display()
	{
		for (size_t i = this->lowerLimit, sum = 0, num = i; i <= this->upperLimit; i++, sum = 0, num = i)
		{
			while (CanExtract(num))
			{
				int digit = ExtractDigit(num);
				sum += Factorial(digit);
				num = ReduceDigit(num);
			}
			ShowResult(sum, i);
		}
	}
private:
	int Factorial(int num)
	{
		if (num < 2)
			return 1;
		return num * Factorial(num - 1);
	}
	int ExtractDigit(int num)
	{
		return num % 10;
	}
	int ReduceDigit(int num)
	{
		return num / 10;
	}
	void ShowResult(int sum, int i)
	{
		if (sum == i)
		{
			cout << i << '\n';
		}
	}
	bool CanExtract(int num)
	{
		return num > 0;
	}
	//state
	int lowerLimit;
	int upperLimit;
};

int main()
{
	MagicNumbers magicNumbers;
	magicNumbers.SetLimit(1, 50000);
	magicNumbers.Display();
	return 0;
}