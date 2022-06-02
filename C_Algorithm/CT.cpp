#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct str_record {
	char name[30]; // �̸�. �̰��� Ű�� �Ѵ�.
	int stno; // �й�
} ty_record;


typedef struct str_treenode* ty_treenode_ptr;
typedef struct str_treenode { // Ʈ�� ����� Ÿ�Լ���.
	ty_record data;
	ty_treenode_ptr left, right;
} ty_treenode;



// key �� ���� ��带 ã�´�. �߰ߵǸ� NULL�� ��ȯ�ϰ�,
// Ž�� �߿� ���������� ������ ����� �����͸� ��ȯ.
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
	if (!(*node)) // ��Ʈ�� ���̸� �� ��尡 �� ���� ���� ���.
		*node = newnode;
	else {
		temp = modifiedSearch(*node, item.name);
		if (!temp)
			printf("���� Ű�� ���=%s\n", item.name);
		else {
			if (strcmp(item.name, temp->data.name) < 0)
				temp->left = newnode;
			else
				temp->right = newnode;
		}
	}
} // insert
/* �Լ� get_maxnode */
// ��͸� ���� ����
str_treenode* get_maxnode(ty_treenode_ptr root) {

	//�ִ� ���� ���� ��带 ����
	ty_treenode_ptr Max = root;
	//��͸� ���ؼ� ������ ��忡 ������ �ݺ��Ѵ�.
	get_maxnode(Max->right);
	return Max;
}
//while���� �̿��Ͽ� �ݺ� ����
str_treenode* whileget_maxnode(ty_treenode_ptr root) {

	//�ִ� ���� ���� ��带 ����
	ty_treenode_ptr Max = root;
	//while�� ���ؼ� ������ ��忡 ������ �ݺ��Ѵ�.
	while (Max->right = NULL) {
		Max = Max->right;
	}
	return Max;
}

void print_Maxnode(ty_treenode_ptr max_nodeptr) {
	//max��带 ���� ��ȯ���� ��忡 �����Ϳ� �����Ͽ� �̸��� �й��� ����Ѵ�.
	printf("�л��� �̸���:%s\n �й�%d", max_nodeptr->data.name, max_nodeptr->data.stno);

}
int main()
{
	char sname[30];
	int stnumber, readnum;
	ty_treenode_ptr ROOT = NULL; // ��Ʈ��带 ����Ű�� ������.
	ty_treenode_ptr max_nodeptr;
	ty_record newrecord;
	FILE* fp;
	fp = fopen("data.txt", "r"); // ������ ����.
	if (!fp) {
		printf("���� ���� ����: data.txt.\n");
		return 0;
	}
	// ������ ���Ͽ��� ��� ���ڵ���� �о BST �� �ִ´�.
	// ������� ROOT �� ��Ʈ��带 ����Ű�� �Ѵ�.
	while (1) {
		readnum = fscanf(fp, "%s%d", sname, &stnumber);
		if (readnum != 2) {
			break; // ȭ�� ���� ����.
		}
		strcpy(newrecord.name, sname);
		newrecord.stno = stnumber;
		insert(&ROOT, newrecord);
	}
	/* �Լ� get_maxnode �� ROOT �� ����Ű�� ����Ž��Ʈ������
	�ִ�Ű (�� ������ Ű)�� ���� ��带 ã�� �̿� ���� �����͸�
	��ȯ�Ѵ�. �Լ��� ��ȯ�� ����� ���� max_nodeptr �� �޴´�.
	*/
	max_nodeptr = get_maxnode(ROOT);
	/* �ִ� Ű�� ���� ����� ������ ����Ѵ�. */
	print_Maxnode(max_nodeptr);


	fclose(fp);
	printf("���α׷��� ����˴ϴ�.\n");
	return 1;
} // main