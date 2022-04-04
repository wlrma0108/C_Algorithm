#include<stdio.h>


typedef struct Listdata {
	char name[30];
	int id;

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




}

int delete(linkedList* L, int x) {



	return 1;
};
