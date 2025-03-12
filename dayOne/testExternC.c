#include <stdio.h>

void fun();

void funOne() {
	printf("Just for fun in funOne()...\n");
}

void funTwo() {
	printf("Calling fun() in C++ from here\n");
	fun();
}