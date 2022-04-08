#include<stdio.h>

int main(void) {

	int input;

	scanf("%d", &input);
	input = (int)input;

	if (input < 1) {

		printf("error");

	}

	for (int i = 1; i < input; i++) {

		if (input % i == 0) {
			printf("%d\n", i);
		}

	}


}