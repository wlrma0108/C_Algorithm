//2020253091_±Ë»£¡ﬂ
#include<stdio.h>



int main(void) {

	double ms = 0.0001;
	double us = 0.0000001;
	double ns = 0.0000000001;
	double total = 50.0*ns + 0.5*us + 100.0*ms+9.0;
	printf("%.10f", total);


}