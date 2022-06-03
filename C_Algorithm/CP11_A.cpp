#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(void) {
	
	int len=0;
	char* a;
	a = (char*)malloc(sizeof(char) * 20);

	scanf("%s", a);
	printf("%s", a);


	while (*a) {
		a++;
		len++;
	}
	printf("%d", len);
}