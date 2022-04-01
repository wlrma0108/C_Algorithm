#define _CRT_SECURE_NO_WARNINGS   
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {


	int random_1, random_2, random_3;
	int ans_1, ans_2, ans_3;
	random_1 = rand() % 20+1;
	random_2 = rand() % 20+1;
	random_3 = rand() % 20+1;

	printf("%d\n", random_1);
	scanf("%d", &ans_1);
	if (random_1 > ans_1) {

		printf("system out UP");
	}
	else if (random_1 < ans_1) {

		printf("System out Down");
	}
	else {
		printf("Correct");
		return 0;
	}

	scanf("%d", &ans_1);

	if (random_1 > ans_1) {

		printf("system out UP");
	}
	else if (random_1 < ans_1) {

		printf("System out Down");
	}
	else {
		printf("Correct");
		return 0;
	}

	scanf("%d", &ans_1);

	if (random_1 > ans_1) {

		printf("system out UP");
	}
	else if (random_1 < ans_1) {

		printf("System out Down");
	}
	else {
		printf("Correct");
		return 0;
	}
}