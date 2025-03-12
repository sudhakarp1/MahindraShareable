#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	/*int* p = (int*)malloc(sizeof(int));
	*p = 10;*/
	int* p = new int(10);
	delete p;//free(p);
	return 0;
}