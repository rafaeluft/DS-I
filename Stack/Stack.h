#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct stack Stack;

Stack* Stack_create();
bool Stack_push(Stack*, int);
bool Stack_pop(Stack*, int*);
bool Stack_head(Stack*, int*);
void Stack_destroy(Stack*);
bool Stack_full(Stack*);
bool Stack_empty(Stack*);
int Stack_qty(Stack*);

#endif