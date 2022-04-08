#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void) {

	int random_1,ans;
	random_1 = (rand() % 20) + 1;
	printf("%d", random_1);
	for (int i = 0; i < 3; i++) {

		scanf("%d", &ans);
		if (random_1 == ans) {
			printf("correct");
				break;
		}
		else if (ans > random_1) {
			printf("Down");
		}
		else  {
			printf("UP");
		}
	}



}