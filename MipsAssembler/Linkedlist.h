#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _STR_NODE {
	char* val;
	struct _STR_NODE* next;
	struct _STR_NODE* prev;
} STR_NODE;

typedef struct _LINKED_LIST {
	STR_NODE* first;
	STR_NODE* last;
	int count;
}LINKED_LIST;

LINKED_LIST* newList();
STR_NODE* newNode(char* str);
void append(LINKED_LIST* list, STR_NODE* node);
void printList(STR_NODE* first);
#endif