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

LINKED_LIST* newList(); //returns a pointer to a new mallocated list O(1)
STR_NODE* newNode(char* str); //return a pointer to a new mallocated node O(1)
void append(LINKED_LIST* list, STR_NODE* node); //appends a given node to the end of a linked list O(1)
void printList(STR_NODE* first); //prints the list as a formated chain O(n)
#endif