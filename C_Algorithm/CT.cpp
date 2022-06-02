#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct str_record {
	char name[30]; // 이름. 이것을 키로 한다.
	int stno; // 학번
} ty_record;


typedef struct str_treenode* ty_treenode_ptr;
typedef struct str_treenode { // 트리 노드의 타입선언.
	ty_record data;
	ty_treenode_ptr left, right;
} ty_treenode;



// key 를 가진 노드를 찾는다. 발견되면 NULL을 반환하고,
// 탐색 중에 마지막으로 도달한 노드의 포인터를 반환.
ty_treenode_ptr modifiedSearch(ty_treenode_ptr root, char* key)
{
	ty_treenode_ptr nodeptr = root;
	ty_treenode_ptr parent = NULL;
	while (nodeptr) {
		if (strcmp(key, nodeptr->data.name) == 0)
			return NULL;
		parent = nodeptr;
		if (strcmp(key, nodeptr->data.name) < 0)
			nodeptr = nodeptr->left;
		else
			nodeptr = nodeptr->right;
	}
	return parent;



} // modifiedSearch
void insert(ty_treenode_ptr* node, ty_record item)
{
	ty_treenode_ptr newnode, temp;
	newnode = (ty_treenode_ptr)malloc(sizeof(ty_treenode));
	newnode->data = item;
	newnode->left = newnode->right = NULL;
	if (!(*node)) // 루트가 널이면 즉 노드가 한 개도 없는 경우.
		*node = newnode;
	else {
		temp = modifiedSearch(*node, item.name);
		if (!temp)
			printf("동일 키의 노드=%s\n", item.name);
		else {
			if (strcmp(item.name, temp->data.name) < 0)
				temp->left = newnode;
			else
				temp->right = newnode;
		}
	}
} // insert
/* 함수 get_maxnode */
// 재귀를 통한 접근
str_treenode* get_maxnode(ty_treenode_ptr root) {

	//최대 값을 받을 노드를 설정
	ty_treenode_ptr Max = root;
	//재귀를 통해서 오른쪽 노드에 접근을 반복한다.
	get_maxnode(Max->right);
	return Max;
}
//while문을 이용하여 반복 접근
str_treenode* whileget_maxnode(ty_treenode_ptr root) {

	//최대 값을 받을 노드를 설정
	ty_treenode_ptr Max = root;
	//while을 통해서 오른쪽 노드에 접근을 반복한다.
	while (Max->right = NULL) {
		Max = Max->right;
	}
	return Max;
}

void print_Maxnode(ty_treenode_ptr max_nodeptr) {
	//max노드를 통해 반환받은 노드에 데이터에 접근하여 이름과 학번을 출력한다.
	printf("학생의 이름은:%s\n 학번%d", max_nodeptr->data.name, max_nodeptr->data.stno);

}
int main()
{
	char sname[30];
	int stnumber, readnum;
	ty_treenode_ptr ROOT = NULL; // 루트노드를 가리키는 포인터.
	ty_treenode_ptr max_nodeptr;
	ty_record newrecord;
	FILE* fp;
	fp = fopen("data.txt", "r"); // 파일을 연다.
	if (!fp) {
		printf("파일 열기 에러: data.txt.\n");
		return 0;
	}
	// 데이터 파일에서 모든 레코드들을 읽어서 BST 에 넣는다.
	// 헤더변수 ROOT 가 루트노드를 가리키게 한다.
	while (1) {
		readnum = fscanf(fp, "%s%d", sname, &stnumber);
		if (readnum != 2) {
			break; // 화일 끝에 도달.
		}
		strcpy(newrecord.name, sname);
		newrecord.stno = stnumber;
		insert(&ROOT, newrecord);
	}
	/* 함수 get_maxnode 는 ROOT 가 가리키는 이진탐색트리에서
	최대키 (맨 마지막 키)를 가진 노드를 찾아 이에 대한 포인터를
	반환한다. 함수가 반환한 결과는 변수 max_nodeptr 로 받는다.
	*/
	max_nodeptr = get_maxnode(ROOT);
	/* 최대 키를 가진 노드의 내용을 출력한다. */
	print_Maxnode(max_nodeptr);


	fclose(fp);
	printf("프로그램이 종료됩니다.\n");
	return 1;
} // main