#include<stdio.h>


int main(void) {



	int arr[4][3];
	int a;
	int max = 0;
	int max1 = 0;
	int max2 = 0;
	int max3 = 0;

	int min = 100;
	int min1 = 100;
	int min2 = 100;
	int min3 = 100;

	int total = 0;
	int total1 = 0;
	int	total2 = 0;
	int	total3 = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a);
			arr[i][j] = a;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {

			if (j == 0) {
				total1 = total1 +arr[i][j];
				if (arr[i][j] > max) {
					max1 = arr[i][j];
				}
				if (min1 > arr[i][j]) {
					min1 = arr[i][j];
				}
			}
			if (j == 1) {
				total2 = total2 +arr[i][j];
				if (arr[i][j] > max) {
					max2 = arr[i][j];
				}
				if (min2 > arr[i][j]) {
					min2 = arr[i][j];
				}
			}
			if (j == 2) {
				total3 = total3 +arr[i][j];
				if (arr[i][j] > max) {
					max3 = arr[i][j];
				}
				if (min3 > arr[i][j]) {
					min3 = arr[i][j];
				}
			}

			total = total +arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
	}
	printf("total %d\n", total);
	printf("total1 %d\n",total1);
	printf("total2 %d\n",total2);
	printf("total3 %d\n",total3);
	printf("mean %d\n", total/3);
	printf("mean1 %d\n", total1/3);
	printf("mean2 %d\n", total2/3);
	printf("mean3 %d\n", total3/3);
	printf("min %d\n", min);
	printf("min1 %d\n", min1);
	printf("min2 %d\n", min2);
	printf("min3 %d\n", min3);
	printf("max %d\n", max);
	printf("max1 %d\n", max1);
	printf("max2 %d\n", max2);
	printf("max3 %d\n", max3);

	//√—¡° ∆Ú±’ √÷¥Î √÷º“


}



