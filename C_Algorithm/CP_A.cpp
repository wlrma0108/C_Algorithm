#include<stdio.h>
 
int main(void) {

	int a;
	char c;
	scanf_s("%c", &c, sizeof(c));
	printf("%d", c);
}