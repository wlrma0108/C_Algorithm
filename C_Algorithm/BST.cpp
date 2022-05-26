#include<stdio.h>
#include<stdlib.h>

#define MAX_CODE_LENGTH 6 // ������ȣ ���� ����

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
	printf("\n\t 1 : ���Ȯ��");
	printf("\n\t 2 :   �԰�");
	printf("\n\t 3 :   ���");
	printf("\n\t 4 :   �˻�");
	printf("\n\t 5 :   ����");

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
		//���� ��� �湮�� ��� ���� ������ ��� �湮 ��� ��͸� ���� ����
		confirm(T->left);
		printf("���� ��ȣ:	 %s, ���:	%d", T-> key.itemCode,T-> key.stock);
		confirm(T->right);
	}

};
void search(BST* B, item index) {
	
	treeNode* t = B->head;
	treeNode* temp = NULL;
	for (int i = 0; i < 10; i++) {
		if (index.itemCode == t->key.itemCode) {

			printf("������ȣ %s ������ �����Դϴ�. ������: %d �Դϴ�.", t->key.itemCode,t->key.stock);

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
	//�������� ���ٸ� ���� �߰�
	if (index.itemCode == t->key.itemCode) {
		printf("������ �����ϴ� ��ǰ�Դϴ�. ������ ������Ʈ �˴ϴ�.\n");
		t->key.stock = t->key.stock + index.stock;
		printf("��ǰ�ڵ�: %s\t��ǰ: %d\n",t->key.itemCode,t->key.stock);

	}
	//�������� ���� �ʴٸ� ��ǰ �߰� ���� ���� �߰�
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

			printf("�����Ͻ� �������� %s �Դϴ�. ������ %d�� �����մϴ�\n", t->key.stock, t->key.itemCode);
			if (t->key.stock > index.stock) {
				printf("������ �������� %d���� ����Ͽ����ϴ�. ", index.stock);
				t->key.stock = t->key.stock - index.stock;
				return;
			}
			else {
				printf("�ʹ� ���� ���� �䱸�Ͻʴϴ�.");
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