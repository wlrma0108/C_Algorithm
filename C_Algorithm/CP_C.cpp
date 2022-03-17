#include<stdio.h>

int main(void) {

	int hour = 60*60;
	int min = 60;
	int sec = 1;
	int total = 13 * hour + 25 * min + 30 * sec;
	printf("%d", total);
}