#include<stdio.h>

int a = 11;
int b = 22;
int add(int a, int b) {
	return a + b;
}


int main(void) {
	int a, b,result;
	a = 10;
	b = 12;
	result = add(a, b);

	printf("%d\n", result);

	return 0;


}