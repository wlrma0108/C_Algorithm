#include<stdio.h>

int main(void) {
	char input;
	while (1) {
		scanf("%s", &input);
		if (input == 'Q') {
			printf("program end");

			return 0;
		}

		if (input == 'q') {
			printf("program end");

			return 0;
		}
	}
	return 0;

}