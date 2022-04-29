#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX 2


int rocksessiorpaper();
int main(void) {

	rocksessiorpaper();



}


int rocksessiorpaper() {
	
	for (int i = 0; i < 3; i++) {
		int a = 0; //player
		int b = 0;
		scanf("%d", &a);
		b = rand() % 3 + 1;
		if (a == b) {
			printf("same\n");
			i--;
		}
		if (a == 1 && b == 2) {

			printf("player lose\n");
		}
		if (a == 1 && b == 3) {

			printf("palyer win\n");
		}
		if (a == 2 && b == 3) {

			printf("player lose\n");

		}
		if (a == 2 && b == 1) {

			printf("palyer win\n");

		}
		if (a == 3 && b == 1) {

			printf("player lose\n");

		}

		if (a == 3 && b == 2) {

			printf("palyer win\n");

		}


	}
	return 0;
}