#include "utils.h"

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

LINKED_LIST* splitStr(char* str, char delimiter) {
	LINKED_LIST* list;
	STR_NODE* temp;
	char *strptr, *strptr2;

	list = newList();
	*strptr = str;
	*strptr2 = str;

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