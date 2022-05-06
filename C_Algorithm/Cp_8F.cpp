#include<stdio.h>


int add(int a, int b) {
	return a + b;
}
int Fib(int k) {
	if (k == 1) {
		return 1;
	}
	if (k == 2) {
		return 1;
	}
	return Fib(k - 1) + Fib(k - 2);
}

int Recur(int k) {
	if (k > 0) {
		printf("%d", k);
		k - 1;
		Recur(k);
	}
	else {
		printf("End");
	}
}

int main(void) {


	int num1 = 1;
	int num2 = 2;
	int result = 0;
	int i = 0;
	for (int i = 0; i < 10; i++) {

		result = add(num1, num2);
		printf("%d", result);


	}




}