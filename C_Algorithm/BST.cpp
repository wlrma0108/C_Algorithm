#include<stdio.h>
#include<stdlib.h>

#define MAX_CODE_LENGTH 6 // 관리번호 길이 정의

typedef int itemStock;



typedef struct {
	char itemCode[MAX_CODE_LENGTH];
	itemStock stock;
} item;



typedef struct treeNode {
	item key;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;


typedef struct BST {
	treeNode* head;
} BST;


int confirm(treeNode* T);
void search(BST* B, int index);
void input(BST* B, item index);
void output(BST* B, int index);


int main(void) {

	BST* B;
	B = (BST*)malloc(sizeof(BST));
	B->head = NULL;

	printf("===========SELECT MENU=========== ");
	printf("\n\t 1 : 재고확인");
	printf("\n\t 2 :   입고");
	printf("\n\t 3 :   출고");
	printf("\n\t 4 :   검색");
	printf("\n\t 5 :   종료");

	printf("\n================================= ");
	
	int select;
	scanf("%d", &select);
	switch (select) {

	case 1:
		int confirm();
		break;

	case 2:
	//	input();
		break;

	case 3:
	//	output();
		break;

	case 4:
		int index;
		scanf("%d", &index);
		search(B, index);
		break;

	case 5:
		void Exit();
		break;
	}

}

int confirm(treeNode* T) {
	treeNode* t = T;
	
	if (t == NULL) {
		return 0;
	}
	else {
		//좌측 노드 방문후 출력 이후 오른쪽 노드 방문 출력 재귀를 통해 구현
		confirm(T->left);
		printf("관리 번호:	 %s, 재고:	%d", T-> key.itemCode,T-> key.stock);
		confirm(T->right);
	}

};
void search(BST* B, item index) {
	
	treeNode* t = B->head;
	treeNode* temp = NULL;
	for (int i = 0; i < 10; i++) {
		if (index.itemCode == t->key.itemCode) {

			printf("관리번호 %s 에대한 정보입니다. 재고수량: %d 입니다.", t->key.itemCode,t->key.stock);

		}
		else {
			t = t->left;

		}
	}
	
};
void input(BST* B, item index) {


	treeNode* t = B->head;
	treeNode* temp = NULL;


	if (index.stock < 0) {
		printf("ERROR");
		return;
	}
	//아이템이 같다면 수량 추가
	if (index.itemCode == t->key.itemCode) {
		printf("기존에 존재하는 물품입니다. 수량이 업데이트 됩니다.\n");
		t->key.stock = t->key.stock + index.stock;
		printf("상품코드: %s\t물품: %d\n",t->key.itemCode,t->key.stock);

	}
	//아이템이 같지 않다면 물품 추가 수량 정보 추가
	else {

		temp = t;
		if (index.itemCode[0] < t->key.itemCode[0]) {

			t = t->left;
		}
		else {
			t = t->right;
		}
	}

};
void output(BST* B, item index) {

	treeNode* t = B->head;
	treeNode* temp = NULL;
	for (int i = 0; i < 10; i++) {
		if (index.itemCode == t->key.itemCode) {

			printf("선택하신 아이템은 %s 입니다. 수량은 %d개 존재합니다\n", t->key.stock, t->key.itemCode);
			if (t->key.stock > index.stock) {
				printf("기존의 수량에서 %d개를 출고하였습니다. ", index.stock);
				t->key.stock = t->key.stock - index.stock;
				return;
			}
			else {
				printf("너무 과한 것을 요구하십니다.");
				return;
			}
		}
		else {

			t = t->left;
		}
	}
};
void Exit() {
	
	return;

};