#include<stdio.h>
#include<stdlib.h>

int maxof(const int a[], int n) {


	int i;
	int max = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}


int main(void) {


	int i=0;
	int number = 0;
	int* height;
	scanf("%d", &number);
	height = (int*)calloc(number, sizeof(int));
	for (i = 0; i < number; i++) {
		scanf("%d", &height[i]);

	}

	free(height);
	return 0;

}