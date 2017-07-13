#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Linkedlist.h"

LINKED_LIST* splitStr(char* str, char delimiter) {
	if (delimiter == '\0') {
		return NULL;
	}
	LINKED_LIST* list = newList();
	STR_NODE* temp;
	char* strptr = str;
	char* strptr2 = str;
	while (*strptr2 != '\0') {
		strptr2++;
		if (*strptr2 == delimiter) {
			strcpy(strptr2, "\0");
			temp = newNode(strptr);
			strptr = ++strptr2;
			append(list, temp);
		}
	}
	return list;
}
#endif