#include "Linkedlist.h"

LINKED_LIST* newList() {
	LINKED_LIST* list = (LINKED_LIST*)malloc(sizeof(LINKED_LIST));
	list->last = NULL;
	list->first = NULL;
	list->count = 0;
	return list;
}

STR_NODE* newNode(char* str) {
	int size = strlen(str);
	STR_NODE* strNode = (STR_NODE*)malloc(sizeof(STR_NODE));
	strNode->next = NULL;
	strNode->prev = NULL;
	strNode->val = (char*)malloc(size);
	strcpy(strNode->val, str);
	return strNode;
}

void append(LINKED_LIST* list, STR_NODE* node) {
	list->count++;
	if (!list->first) {
		list->first = node;
		list->last = node;
	}
	else {
		node->prev = list->last;
		list->last->next = node;
		list->last = list->last->next;
	}
}

void printList(STR_NODE* now) {
	if (now == NULL) {
		printf("NULL\n");
		return;
	}
	printf("%s-->", now->val);
	printList(now->next);
}