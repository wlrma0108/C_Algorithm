#include<stdio.h>

int add(int a, int b);
int staticadd(int a, int b);
int main(void) {
	int result,result2;
	result = add(10, 20);
	printf("%d\n", result);
	result2 = staticadd(10, 20);
	printf("%d\n", result2);
	result = add(10, 20);
	printf("%d\n", result);
	result2 = staticadd(10, 20);
	printf("%d\n", result2);
}

int add(int a, int b) {

	int x=0;
	x = x + a + b;
	return x;

}
int staticadd(int a, int b) {
	static int y=0;
	y = y+a + b;
	return y;
}