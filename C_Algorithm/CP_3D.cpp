
//2020253091_±Ë»£¡ﬂ
#include<stdio.h>


int main(void) {

	int hour, min, sec;
	int total = 0;
	scanf_s("%d %d %d", &hour, &min, &sec, sizeof(hour), sizeof(min), sizeof(sec));
	total = 3600 * hour + 60 * min + sec;
	

	printf("%d", total);



}