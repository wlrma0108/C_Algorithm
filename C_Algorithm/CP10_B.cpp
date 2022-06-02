#include<stdio.h>

void SWAP(int* a, int* b);
int main(void) {


	int a = 10;
	int b = 20;
	

	SWAP(&a, &b);
	printf("a: %d b: %d",a,b);
	return 0;

}
void SWAP(int* a, int* b) {

	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}