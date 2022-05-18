#include<stdio.h>
#include<string.h>

int main(void) {

	//사전 정의
	char dictionary[15][2][10] = 
	{ {"apple","사과"},{"can","할수있다"},{"cup","컵"},{"Book","책"},{"Gold","금"},{"Cap","모자"},{"Week","주"},{"Check","확인하다"},{"Bottle","물통"},{"Green","초록색"},{"Run","달리다"},{"Hand","건네주다"},{"Contain","포함하다"},{"Watch","시계"},{"Ant","개미"} };
	//목표 단어 입력 받기
	char search[10];
	scanf("%s", &search);
	// 사전 하나하나 찾아가며 목표단어와 일치하는지 확인후 일치한다면 출력 
	for (int i = 0; i < 15; i++) {
		if (strcmp(dictionary[i][0], search) == 0) {

			printf("%s \t %s", search, dictionary[i][1]);
		}

	}
}