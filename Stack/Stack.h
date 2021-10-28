#ifndef STACK_H
#define STACK_H

typedef struct stack Stack;

Stack* Stack_create();
int Stack_push(Stack*, int);
int Stack_pop(Stack*, int*);
int Stack_head(Stack*, int*);
void Stack_destroy(Stack*);
int Stack_full(Stack*);
int Stack_empty(Stack*);
int Stack_qty(Stack*);

#endif