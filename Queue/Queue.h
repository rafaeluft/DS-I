#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue Queue;

Queue* Queue_create();
void Queue_destroy(Queue*);
int Queue_enqueue(Queue*, int);
int Queue_dequeue(Queue*, int*);
int Queue_head(Queue*, int*);

int Queue_full(Queue*);
int Queue_empty(Queue*);
int Queue_qty(Queue*);

#endif