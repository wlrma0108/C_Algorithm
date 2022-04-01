#define _CRT_SECURE_NO_WARNINGS   
#include<stdio.h>


int main(void) {
	char oper='a';
	float num_1, num_2;
	scanf("%f %c %f", &num_1,&oper, &num_2);


	if (oper=='+') {
		printf("%f",num_1 + num_2);
	}
	else if (oper == '-') {
		printf("%f", num_1 - num_2);

	}
	else if (oper == '/') {
		printf("%f", num_1 / num_2);

	}
	else if (oper == '*') {
		printf("%f", num_1 * num_2);

	}
	
	else {
		printf("Error");
	}
	return 0;
}