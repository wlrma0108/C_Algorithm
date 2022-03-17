#include<stdio.h>
int main(void) {

	float pi = 3.14;
	float rad = 5.7;
	float up = 3;
	float down = 2;
	float height = 1.5;
	float circle = 0;
	float trapezoid = 0;
	
	circle = pi * rad * rad;
	trapezoid = (up + down) / 2 * height;
	printf("%lf\n", circle);
	printf("%lf\n", trapezoid);
}