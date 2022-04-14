#include<stdio.h>
#include<cstdio>
#include<stdlib.h>

typedef struct Listdata {
	char name[30];
	int id;

}listData;

typedef struct ListNode {

	listData data;
	struct ListNode* link;
}listNode;

typedef struct LinkedList {
	listNode* head;
	int length;

}linkedList;

int main(void) {
	int point = 0;
	char command[10];
	struct Listdata L;
	linkedList *L;
	FILE* f;
	f = fopen("student.txt", "r");
	for (int i= 0; i < 15; i++) {
		fscanf(f, "%s, %d", &L.name, &L.id);
	}
	scanf("%d", &point);
	fclose(f);
	
	printf("명령을 입력하세요");
	gets_s(command,sizeof(command));
	printf("%s", command);
	if (command[0] == 's') {
		listNode* search(linkedList * L, int x);
	}
	else if (command[0] == 'i') {
		int insert(linkedList * L, listNode * pre, listData item);
		}
	else if (command[0] == 'l') {
		insertLast(linkedList * L, listData item);
	}
	else if (command[0] == 'd') {
		int delete_list(linkedList * L, int x);
	}
	else if (command[0] == 'r') {
		void reverse(linkedList * L);

	}
	else if (command[0] == 'g') {
		int getLength(linkedList * L);

	}
	else if (command[0] == 'e') {
		int exit();
	}
	else if (command[0] == 'p') {
		void printList(linkedList * L);
	}
	else {
		return 0;
	}
}
void insertLast(linkedList* L, listData item) {

	listNode* newNode, * temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = item;
	newNode->link = NULL;
	if (L->head == NULL)
		L->head = newNode;
	else {
		temp = L->head;
		while (temp->link != NULL)
			temp = temp->link;
		temp->link = newNode;
	}
	L->length++;
 }
void printList(linkedList* L) {
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf(" %d", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(")\n");
	}


listNode* search(linkedList* L, int x) {

	listNode* ptr = L->head;
	while (ptr != NULL) {
		if (ptr->data.id==x) {
			
			printf("search correct");
		}
	}
	return 0;
}
int insert(linkedList* L, listNode* pre, listData item) {
	
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = item;

	if (L->head == NULL) {
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = L->head;
		L->head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
	L->length++;

}
int delete_list(linkedList* L, int x) {
	struct linkedList* temp = *L, * prev;

	if (temp != NULL && temp->data == x) {
		*head_ref = temp->next; 
		free(temp); 
		return;
	}

	while (temp != NULL && temp->data != x) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return;

	prev->next = temp->next;

	free(temp); // Free memoryi
};

void reverse(linkedList* L) {
	listNode* a;
	listNode* b;
	listNode* c;

	a = L->head;
	b = NULL;
	c = NULL;
	while ( a != NULL) {
		c = b;
		b = a;
		a = a->link;
		b->link = c;
	}

}
int getLength(linkedList* L) {

	return L->length;
}

int exit() {



	return 0;
}
