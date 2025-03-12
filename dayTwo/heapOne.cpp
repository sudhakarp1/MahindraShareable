#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int* p = (int*)malloc(sizeof(int));
	*p = 10;
	//your logic her
	free(p);
	return 0;
}

