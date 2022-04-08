#include<stdio.h>

int main(void) {

	int i = 2;
	int j = 1;
	while(i<10) {

		while(j<10) {

			printf("%d * %d= %2d\t", j, i, i * j);
			j++;
		}
		i++;
		j = 1;
		printf("\n");

	}





}