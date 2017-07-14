#include <stdio.h>
#include "Utils.h"
#include "Linkedlist.h"

int main() {
	char* fileData;
	FILE* fp;
	unsigned long size;
	LINKED_LIST* list;

	list = newList();
	fp = fopen("file.txt", "r");
	if (!fp) {
		printf("File not found!\n");
		getchar();
		return -1;
	}
	size = getFileSize(fp);
	fileData = (char*)malloc(size+1);
	memset(fileData, 0, size + 1);
	fread(fileData, sizeof(char), size, fp);
	list = splitStr(fileData, '\n');
	printList(list->first);
	getchar();
	return 1;
}