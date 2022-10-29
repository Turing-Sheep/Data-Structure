#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int ElementType;
typedef struct SListNode
{
	struct SListNode* next;
	ElementType data;
}SListNode;

void SListPrint(const SListNode*phead);
void SListPushBack(SListNode**pphead,ElementType dat);
void SListPushFront(SListNode**pphead,ElementType dat);
void SListPopBack(SListNode**pphead);
void SListPopFront(SListNode**pphead);
SListNode* SListFind(SListNode* phead, ElementType fin);
void SListInsertFront(SListNode** pphead, SListNode* pos, ElementType dat);
void SListInsertAfter(SListNode** pphead,SListNode* pos,ElementType dat);
void SListErase(SListNode** pphead, SListNode* pos);
void SListDestory(SListNode** pphead);
