#include<stdio.h>

int main(void) {

	int num1 = 0;
	scanf("%d", &num1);
	num1 = (int)num1;
	if (num1 < 1) {

		printf("error input");

	}
	for (int i = 0; i < num1; i++) {
			printf(" %d", i);
			if (i % 10 == 0) {
				printf("\n");
			}
		
	}



}