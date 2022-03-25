#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main(void) {

	float random_number;
	srand((unsigned)time(NULL));
	random_number = (float)(rand()) / 1000;
	random_number = random_number + 0.005;
	random_number=(int)(random_number*100);
	random_number = random_number / 100;
	printf("%f\n", random_number);

	return 0;

}