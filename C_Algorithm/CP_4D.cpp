#include<stdio.h>

int main(void) {


	int int_num = 129;
	char char_num = int_num;
	printf("1: %d\n", char_num);

	double double_num = 10;
	double_num = int_num + double_num;
	printf("2: %d\n", (int)double_num);
	printf("3: %lf\n", double_num);

	int num1 = 10, num2 = 4;
	float fnum = num1 / num2;
	printf("4: %f\n", fnum);

	fnum = num1 % num2;
	printf("5: %f\n", fnum);

	int inum = num1 / num2;
	printf("6: %d\n", inum);

	printf("7: %d\n", num1 == num2);
	printf("8: %d\n", sizeof(double_num) + sizeof(long) + sizeof(char));
	printf("9: %d\n", num1 = 5 == 5);
	printf("10: %d\n", num2 = 10 != (int)double_num);

}