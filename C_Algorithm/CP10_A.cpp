#include<stdio.h>
#include<string.h>

typedef struct student {


	char name[100];
	int age;
	char address[100];
	char studentcode[100];

}student;

int main(void) {
	student a;
	student b;
	student c;
	student d;
	student e;
	
	strcpy(a.name, "ȫ�浿");
	strcpy(a.address, "������ ���ֽ� ����� �������");
	strcpy(a.studentcode, "2022000001");
	a.age = 20;
	
	strcpy(b.name, "b");
	strcpy(b.address, "������ ���ֽ� ����� �������");
	strcpy(b.studentcode, "2022000001");
	b.age = 21;

	strcpy(c.name, "c");
	strcpy(c.address, "������ ���ֽ� ����� �������");
	strcpy(c.studentcode, "2022000001");
	c.age = 22;

	strcpy(d.name, "d");
	strcpy(d.address, "������ ���ֽ� ����� �������");
	strcpy(d.studentcode, "2022000001");
	d.age = 23;

	strcpy(e.name, "e");
	strcpy(e.address, "������ ���ֽ� ����� �������");
	strcpy(e.studentcode, "2022000001");
	e.age = 24;


	printf("�̸�: %s\n", a.name);
	printf("�̸�: %s\n", a.address);
	printf("�̸�: %s\n", a.studentcode);
	printf("�̸�: %d\n", a.age);

	int bubble[5] = { a.age, b.age, c.age, d.age,e.age };
	int temp = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {

			if (bubble[j] > bubble[j + 1]) {

				if (bubble[j] > bubble[j + 1])
				{                                 
					temp = bubble[j];
					bubble[j] = bubble[j + 1];
					bubble[j + 1] = temp;
				}
			}

		}

	}

	for (int k = 0; k < 5; k++) {

		printf("%d\n", bubble[k]);
	}



	return 0;
}