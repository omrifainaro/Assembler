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
	do {
		strptr2++;
		if (*strptr2 == delimiter || *strptr2 == '\0') {
			strcpy(strptr2, "\0");
			temp = newNode(strptr);
			strptr = ++strptr2;
			append(list, temp);
		}
	} while (*strptr2 != '\0');
	return list;
}

unsigned long getFileSize(FILE* f) {
	if (!f) {
		return 0;
	}
	long fileSize;
	fseek(f, 0, SEEK_END);
	fileSize = ftell(f);
	fseek(f, 0, SEEK_SET);
	return fileSize;
}
#endif