#include<iostream>
using namespace std;

int factorial(int num) {
	if (num <= 1)
		return 1;
	return num * factorial(num - 1);
}

int main() {
	int lower, upper;
	for (int i = 1; i < 50000; ++i) {
		int sum = 0, num = i;
		while (num > 0) {
			sum += factorial(num % 10);
			num /= 10;
		}
		if (sum == i)
			cout << i << "\n";
	}
}