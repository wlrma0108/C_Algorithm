#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main(void) {



	FILE* fp = fopen("server (1).txt", "r");

	char buffer[100] = { 0, };

	fread(buffer, 1, 100, fp); 
	printf("%s", buffer);


	fclose(fp);
}