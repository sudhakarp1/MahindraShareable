#include <stdio.h>

int main() {
	unsigned myInt;
	myInt = (unsigned)printf;

	((int (*)())myInt)("Hello World...\n");
}