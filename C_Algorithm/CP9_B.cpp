#include<stdio.h>


int main(void) {


	char day[10];

	for (int i = 0; i < 10; i++) {
		scanf("%c", &day[i]);
		
	}
	for (int i = 0; i < 10; i++) {
		if (i < 4) {
			if ((int)day[i] > 10 && (int)day[i] < 0) {
				printf("ERROR1");
				return 0;
			}
		}
		else if (i < 7) {
			if ((int)day[5] > 2 && (int)day[i] < 0) {
				printf("ERROR2");
				return 0;
			}
		}
		else if (7 < i < 10) {
			if ((int)day[5] == 3 && (int)day[i] > 3) {
				printf("ERROR2");
				return 0;

			}
		}
		if (day[4] != '/' || day[7] != '/') {
			printf("ERROR5");
			return 0;
		}
	}
	if (day[5] == '0' && day[6] == '1') {

		printf("JAN ");
		
	}
	if (day[5] == '0' && day[6] == '2') {

		printf("FEB ");

	}
	if (day[5] == '0' && day[6] == '3') {

		printf("MAR ");

	}
	if (day[5] == '0' && day[6] == '4') {

		printf("APR ");

	}
	if (day[5] == '0' && day[6] == '5') {

		printf("MAY ");

	}
	if (day[5] == '0' && day[6] == '6') {

		printf("JUN ");

	}
	if (day[5] == '0' && day[6] == '7') {

		printf("JUL ");

	}
	if (day[5] == '0' && day[6] == '8') {

		printf("AUG ");

	}
	if (day[5] == '0' && day[6] == '9') {

		printf("SEP ");

	}
	if (day[5] == '1' && day[6] == '0') {

		printf("OCT ");

	}
	if (day[5] == '1' && day[6] == '1') {

		printf("NOV ");

	}
	if (day[5] == '1' && day[6] == '2') {

		printf("DEC ");

	}
	
	printf("%c%c, ", day[8], day[9]);
	for (int k = 0; k < 4; k++) {
		printf("%c", day[k]);
	}
	printf("\n");


	for (int j = 0; j < 4; j++) {
		printf("%c",day[j]);
	}
	printf("³â ");
	for (int j = 6; j < 8; j++) {
		printf("%c", day[j]);
	}
	printf("¿ù ");

	for (int j = 8; j < 10; j++) {
		printf("%c", day[j]);
	}
	printf("ÀÏ");

}