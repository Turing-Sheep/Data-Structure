#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int ElementType;
typedef struct Stack
{
	ElementType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST *ps);
void StackDestory(ST *ps);
void StackPush(ST *ps,ElementType dat);
void StackPop(ST *ps);
ElementType StackTop(ST*ps);
int StackSize(ST *ps);
bool StackEmpty(ST *ps);