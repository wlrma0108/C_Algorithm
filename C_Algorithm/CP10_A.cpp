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



	return 0;
}