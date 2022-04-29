#include<stdio.h>


int SWAP(int a, int b);

int main(void) {


	SWAP(3, 4);

}


int SWAP(int a, int b) {

	int tmp = a;
	a = b;
	b = tmp;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return a, b;

}