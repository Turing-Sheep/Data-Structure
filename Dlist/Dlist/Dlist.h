#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ElementType;
typedef struct DListNode
{
    struct DListNode* next;
    struct DlistNode* prev;
    ElementType data;
}DLTnode;

DLTnode* DListInit();
void DListPrint(DLTnode* phead);
void DListPushBack(DLTnode* phead, ElementType dat);
void DListPushFront(DLTnode* phead, ElementType dat);
void DListPopBack(DLTnode* phead);
void DListPopFront(DLTnode*phead);
void DListInsert(DLTnode*pos,ElementType dat);
void DListErase(DLTnode* pos);
DLTnode* DListFind(DLTnode*phead,ElementType dat);
void DListDestory(DLTnode**pphead);