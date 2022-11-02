#define  _CRT_SECURE_NO_WARNINGS 1
#include"Dlist.h"
DLTnode* DListInit()
{
    DLTnode* phead = (DLTnode*)malloc(sizeof(DLTnode));
    phead->next = phead;
    phead->prev = phead;
    return phead;
}

void DListPrint(DLTnode* phead)
{
    assert(phead != NULL);
    DLTnode* cur = phead->next;
    while (cur != phead)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
    
}

void DListPushBack(DLTnode* phead, ElementType dat)
{
    assert(phead != NULL);
    DLTnode* newnode = (DLTnode*)malloc(sizeof(DLTnode));
    newnode->data = dat;
    DLTnode* tail = phead->prev;
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = phead;
    phead->prev = newnode;
}

void DListPushFront(DLTnode* phead, ElementType dat)
{
    assert(phead != NULL);
    DLTnode* newnode = (DLTnode*)malloc(sizeof(DLTnode));
    newnode->data = dat;
    newnode->next = phead->next;
    phead->next->prev = newnode;
    phead->next = newnode;
    newnode->prev = phead;

}

void DListPopBack(DLTnode* phead)
{
    assert(phead != NULL);
    assert(phead->next!=phead);//防止删掉头节点
    DLTnode* tail = phead->prev;
    DLTnode*tailprev=tail->prev;
    tailprev->next = phead;
    phead->prev = tailprev;
    free(tail);
    tail = NULL;

}

void DListPopFront(DLTnode* phead)
{
    assert(phead!=NULL);
    assert(phead->next!=phead);//防止删掉头节点
    DLTnode* First = phead->next;
    DLTnode* second = phead->next->next;
    phead->next = second;
    second->prev = phead;
    free(First);
    First = NULL;
}

void DListInsert(DLTnode*pos,ElementType dat)
{
    DLTnode* newnode = (DLTnode*)malloc(sizeof(DLTnode));
    newnode->data = dat;
    DLTnode* posprev = pos->prev;
    posprev->next = newnode;
    newnode->prev = posprev;
    newnode->next = pos;
    pos->prev = newnode;
}

void DListErase(DLTnode*pos)
{
    DLTnode*posprev = pos->prev;
    DLTnode* posnex = pos->next;
    posprev->next = posnex;
    posnex->prev = posprev;
    free(pos);
    pos = NULL;
}

DLTnode* DListFind(DLTnode* phead, ElementType dat)
{
    assert(phead!=NULL);
    DLTnode* cur = phead->next;
    while (cur != phead)
    {
        if (cur->data == dat)
        {
            return cur;
        }
        else
        {
            cur = cur->next;
        }
    }
    return NULL;
}

void DListDestory(DLTnode** pphead)
{
    DLTnode* cur = (*pphead)->next;
    while (cur != *pphead)
    {
        DLTnode* curnex = cur->next;
        free(cur);
        cur = curnex;
    }
    free(*pphead);
    *pphead = NULL;
    cur = NULL;
}