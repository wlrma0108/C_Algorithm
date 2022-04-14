#include<stdio.h>


int main(void) {

	int epoch = 0;
	scanf("%d", &epoch);
	for (int i = 0; i < epoch; i++) {


		for (int j = -1; j < epoch-i; j++) {
			printf(" ");

		}

		for (int k = 0; k < 2*i+1; k++) {
			printf("*");
		}
		printf("\n");

	}


}