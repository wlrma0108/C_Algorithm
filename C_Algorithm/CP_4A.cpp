#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main(void) {

	float random_number;
	srand((unsigned)time(NULL));
	random_number = (float)(rand()) / 1000;

	printf(" % f", round(11.23));
	printf("%f", ceil(123.222));
	printf("%f", floor(113.13));
	return 0;

}