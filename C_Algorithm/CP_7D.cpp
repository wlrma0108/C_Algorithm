#include<stdio.h>

int piramid(int n);
int main(void) {

	int n;
	scanf("%d", &n);
	piramid(n);

	
	return 0;


}

int piramid(int epoch) {

	for (int i = 0; i < epoch; i++) {


		for (int j = -1; j < i; j++) {
			printf(" ");

		}

		for (int k = 0; k < 2 * epoch - 1 - 2*i; k++) {
			printf("*");
		}
		printf("\n");

	}


	for (int i = 0; i < epoch; i++) {

	
		for (int j = 0; j < epoch - i; j++) {
			printf(" ");

		}

		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");

	}

	printf("\n");
	printf("\n");
	printf("\n");

	for (int i = 0; i < epoch; i++) {


		for (int j = -1; j < i; j++) {
			printf("*");

		}

		for (int k = 0; k < 2 * epoch - 1 - 2 * i; k++) {
			printf(" ");
		}

		for (int j = -1; j < i; j++) {
			printf("*");

		}
		printf("\n");

	}


	for (int i = 0; i < epoch; i++) {


		for (int j = 0; j < epoch - i; j++) {
			printf("*");

		}

		for (int k = 0; k < 2 * i + 1; k++) {
			printf(" ");
		}
		for (int j = 0; j < epoch - i; j++) {
			printf("*");
		}

		printf("\n");

	}
	return 0;
};
