#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Linkedlist.h"

LINKED_LIST* splitStr(char* str, char delimiter); //split a string into a double linked list
unsigned long getFileSize(FILE* f); //returns size of file
#endif