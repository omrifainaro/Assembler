#include <stdio.h>
#include "Utils.h"
#include "Linkedlist.h"

int main() {
	char str[] = "OMRI IS THE KING\nOMRI IS THE KING\nOMRI IS THE KING\nOMRI IS THE KING\n";
	LINKED_LIST* list = newList();
	list = splitStr(str, '\n');
	printList(list->first);
	getchar();
	return 1;
}