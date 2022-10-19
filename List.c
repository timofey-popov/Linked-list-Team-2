#include "List.h"

typedef struct ListElement {
    ListValue value;
    ListElement *next;
} ListElement;

typedef struct List {
    ListElement* head;
    ListElement* tail;
    size_t size;
} List;