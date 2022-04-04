#include<stdio.h>
#include<cstdio>

typedef struct Listdata {
	char name[30];
	int id[400];

}listData;

typedef struct Listnode {

	listData data;
	struct ListNode* link;
}listNode;

typedef struct LinkedList {
	listNode* head;
	int length;

}linkedList;



int main(void) {
	char command[10];
	struct Listdata D;
	FILE* f;
	f = fopen("student.txt", "r");
	for (int i= 0; i < 15; i++) {
		fscanf(f, "%s, %d", &D.name, &D.id);
	}

	fclose(f);
	
	printf("명령을 입력하세요");
	gets(command);

}

void printList(linkedList* L) {



}
listNode* search(linkedList* L, int x) {



	return 0;
}
int insert(linkedList* L, listNode* pre, listData item) {


	return 0;

}
int delete_list(linkedList* L, int x) {

	

	return 1;
};
void reverse(linkedList* L) {

}
int getLength(linkedList* L) {



	return 0;

}

int exit() {



	return 0;
}
