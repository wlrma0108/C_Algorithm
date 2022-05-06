#include<stdio.h>


int main(void) {

	int arr[5],a;
	for (int i = 0; i < 5; i++) {

		scanf("%d", &a);
		arr[i] = a;
	}
	for (int j = 4; j > -1; j--) {
		printf("%d\n", arr[j]);
	}

}