#include<stdio.h>

int main(void) {


	int num = 0;
	scanf_s("%d", &num, sizeof(num));
	num = num % 2;
	if (num = 0) {
		printf("even");
	}
	else {
		printf("odd");

	}
	return 0;

}