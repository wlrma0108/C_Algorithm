#include<stdio.h>


int main(void) {

	int a;
	int arr[5] = { 0,4,55,63,-12 };
	scanf("%d", &a);

	for (int i = 0; i < 5; i++) {
		if (a == arr[i]) {
			printf("exist");
		}

	}


}