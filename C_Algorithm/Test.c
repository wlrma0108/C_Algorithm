#include<stdio.h>
#include<stdlib.h>
typedef int element;
// ���� �ذ�
// ������ ��ũ�� ����Ʈ�� ����
// ���ÿ��� k�� pop�Ͽ� Queue�� �������� �ٽ� stack�� push����->reverse
// k�� ������ ����� �Ѿ� ���� occur error��� 

typedef struct ListNode {
	element data;
	struct listNode* link;
} listNode;


typedef struct LinkedStack { 
	listNode* top;
	int length;
} Stack;


typedef struct LinkedQueue { 
	listNode* front, * rear;
} Queue;


Stack* createStack() {
	Stack* S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	S->length = 0;
	return S;
}

void push(Stack* S, element x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	S->top = x;
	newNode->data = x;
	newNode->link = S->top;
	S->top = newNode;
}
element Pop_And_Enqueue(Stack* S,Queue *Q) {
	listNode* temp; 
	element e;
	if (isEmpty(S)) {
		printf("[ERROR] Stack is EMPTY!!\n");
		return 0;
	}
	else {
		temp = S->top;
		e = temp->data;
		S->top = temp->link;
		free(temp);
		enqueue(&Q, e);
		return e;
	}
}
Queue* createQueue() {
	Queue* Q = (Queue*)malloc(sizeof(Queue));
	Q->front = NULL;
	Q->rear = NULL;
	return Q;
}
element Dequeue_And_Push(Queue* Q,Stack* S) {
	listNode* temp;
	element e;
	if (isEmpty(Q)){
		printf("[ERROR] Queue is EMPTY!!\n");
	return 0;
}
	else {
	temp = Q->front;
	e = temp->data;
	Q->front = temp->link;
	free(temp);
	if (Q->front == NULL)
		Q->rear = NULL;
	return e;

	push(&S, e);
	}
}

void displayStack(Stack* S) {
	listNode* p = S->top;
	printf("STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("]\n");
}


void enqueue(Queue* Q, element x) {
	listNode* newNode =(listNode*)malloc(sizeof(listNode));
	newNode->data = x;
	newNode->link = NULL;
	if (isEmpty(Q))
		Q->front = newNode;
	else
		Q->rear->link = newNode;
	Q->rear = newNode;
}



int main(void) {
	Stack S;
	Queue Q;
	int k;
	createQueue();
	createStack();

	//stack�� ������ ����ֱ�
	//10,20,30,40....
	for (int i = 0; i < 7; i++) {
		push(&S, i*10);
	}

	displayStack(&S);
	//�ε��� ���� k
	scanf("%d", &k);
	if (k > 7) {
		printf("error");
	}
	//stack���� k�� pop
	//pop�� �����͸�queue�� push-> pop�����queue������ ���ÿ� ����
	//pop����
	for (int i = 0; i < k; k++) {
		Pop_And_Enqueue(&S,&Q);
	}

	for (int i = 0; i < k; i++) {
		Dequeue_And_Push(&Q, &S);
	}


	displayStack(&S);

}