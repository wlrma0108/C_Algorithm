#include<stdio.h>

int main(void) {
	int year;
	scanf_s("%d", &year, sizeof(year));


	if (year % 4 == 0 && year % 100 != 0 || year%400==0) {
		printf("leap year");

	}
	else {

		printf("normal year");
	}

}