#ifndef DECLARATIONS_H_INCLUDED
#define DECLARATIONS_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {FAILURE,SUCCESS} Status_code;
typedef struct Node{
    int id;
    int quantity;
    char label[10];
    struct Node *next;
}node;

typedef struct Stk
{
    int Size;
	node *top;
}Stack;

void InitializeStack(Stack *s);
node *makeNode(int id,int quantity , char *label);
int isStackEmpty(Stack s);
Status_code push(Stack *s, int id , int quantity , char *label);
Status_code pop( Stack *s, int *quantity , int *id , char *label);
void print(Stack s);
int top(Stack s);
node *divide(node *p);
node *Merge(node *p,node *q);
node *mergeSort(node *head);
void Sort(Stack *s);
void deleteMid(Stack *s);

#endif // DECLARATIONS_H_INCLUDED
