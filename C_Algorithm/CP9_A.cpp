#include<stdio.h>
#include<string.h>

int main(void) {

	//���� ����
	char dictionary[15][2][10] = 
	{ {"apple","���"},{"can","�Ҽ��ִ�"},{"cup","��"},{"Book","å"},{"Gold","��"},{"Cap","����"},{"Week","��"},{"Check","Ȯ���ϴ�"},{"Bottle","����"},{"Green","�ʷϻ�"},{"Run","�޸���"},{"Hand","�ǳ��ִ�"},{"Contain","�����ϴ�"},{"Watch","�ð�"},{"Ant","����"} };
	//��ǥ �ܾ� �Է� �ޱ�
	char search[10];
	scanf("%s", &search);
	// ���� �ϳ��ϳ� ã�ư��� ��ǥ�ܾ�� ��ġ�ϴ��� Ȯ���� ��ġ�Ѵٸ� ��� 
	for (int i = 0; i < 15; i++) {
		if (strcmp(dictionary[i][0], search) == 0) {

			printf("%s \t %s", search, dictionary[i][1]);
		}

	}
}