#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main(void) {
	int a;
	int b;
	float random_number;
	srand((unsigned)time(NULL));
	random_number = (float)(rand()) / 1000;
	printf("%f\n", random_number);
	a = (int)(random_number)/5;
	printf("%d\n", a);
	b = a * 5;
	printf("%d\n", b);

	return 0;
}