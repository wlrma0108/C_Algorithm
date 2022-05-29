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
	
	strcpy(a.name, "홍길동");
	strcpy(a.address, "강원도 원주시 흥업명 연세대길");
	strcpy(a.studentcode, "2022000001");
	a.age = 20;
	
	strcpy(b.name, "b");
	strcpy(b.address, "강원도 원주시 흥업명 연세대길");
	strcpy(b.studentcode, "2022000001");
	b.age = 21;

	strcpy(c.name, "c");
	strcpy(c.address, "강원도 원주시 흥업명 연세대길");
	strcpy(c.studentcode, "2022000001");
	c.age = 22;

	strcpy(d.name, "d");
	strcpy(d.address, "강원도 원주시 흥업명 연세대길");
	strcpy(d.studentcode, "2022000001");
	d.age = 23;

	strcpy(e.name, "e");
	strcpy(e.address, "강원도 원주시 흥업명 연세대길");
	strcpy(e.studentcode, "2022000001");
	e.age = 24;


	printf("이름: %s\n", a.name);
	printf("이름: %s\n", a.address);
	printf("이름: %s\n", a.studentcode);
	printf("이름: %d\n", a.age);

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
	for (int i = 0; i < 5; i++) {
		if (bubble[i] == a.age) {
			printf("이름: %s\n", a.name);
			printf("이름: %s\n", a.address);
			printf("이름: %s\n", a.studentcode);
			printf("이름: %d\n", a.age);
		}
		else if (bubble[i] == b.age) {
			printf("이름: %s\n", b.name);
			printf("이름: %s\n", b.address);
			printf("이름: %s\n", b.studentcode);
			printf("이름: %d\n", b.age);
		}
		else if (bubble[i] == c.age) {
			printf("이름: %s\n", c.name);
			printf("이름: %s\n", c.address);
			printf("이름: %s\n", c.studentcode);
			printf("이름: %d\n", c.age);
		}
		else if (bubble[i] == d.age) {
			printf("이름: %s\n", d.name);
			printf("이름: %s\n", d.address);
			printf("이름: %s\n", d.studentcode);
			printf("이름: %d\n", c.age);
		}
		else if (bubble[i] == e.age) {
			printf("이름: %s\n", e.name);
			printf("이름: %s\n", e.address);
			printf("이름: %s\n", e.studentcode);
			printf("이름: %d\n", e.age);
		}
	}

	return 0;
}




