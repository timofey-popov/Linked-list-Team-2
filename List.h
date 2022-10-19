#pragma once

#include <stdbool.h>

typedef int ListValue;

typedef struct ListElement {
    ListValue value;
    ListElement *next;
} ListElement;

typedef struct List List;

// new methods here
/*
typedef struct Node{

}Node;
int addHead(Node **node);
int add(Node **head);
int delete(Node **node);
int deleteHead(Node **head);
bool isEmpty(Node **head);
int clear(Node **head);

*/