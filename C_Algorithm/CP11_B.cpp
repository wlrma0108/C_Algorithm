#include<stdio.h>

int shapslide(char* a, char* b);
void cpystr(char* a, char* b);

int main(void) {
	char a[] = "abc#aac";
	char b[] = "abcdefgh";
	int k = 0;
	k = shapslide(a, b);
	
	for (k; k > 0; k--) {
		printf("%c", b[k-1]);
	}
}


void cpystr(char* a, char* b) {

	while (*a) {
		*a = *b;
		a++;
		b++;
	}

}
int shapslide(char* a, char* b) {
	int tmp = 0;
	int epoch=0;
	while (*a) {
		*b = *a;

		a++;
		b++;
		tmp++;
		if (*a == '#') {
			epoch = tmp;
		}

	}
	return epoch;
	
}