#include <iostream>
#include <cstdio>
using namespace std;

void fun(int);
void fun(double);

int main() {
	fun(10);
	fun(123.345);
}

void fun(int) {
	puts(__FUNCSIG__);
}
void fun(double) {
	puts(__FUNCSIG__);
}
