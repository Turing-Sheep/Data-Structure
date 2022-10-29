#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//1、打印
void SListPrint(const SListNode* phead)
{
	if (phead != NULL)
	{
		SListNode* cur = phead;
		while (cur != NULL)
		{
			printf("%d->", cur->data);
			cur = cur->next;
		}
		printf("NULL\n");
	}
	else
	{
		printf("Empty List!\n");
	}

}

//2、尾插
void SListPushBack(SListNode** pphead, ElementType dat)
{
	assert(pphead != NULL);
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("failed to creat space!");
		exit(-1);
	}
	else
	{
		newnode->data = dat;
		newnode->next = NULL;
	}

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SListNode* tail=*pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//3、头插
void SListPushFront(SListNode** pphead, ElementType dat)
{
	assert(pphead!=NULL);
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("Failed to creat new space.\n");
		exit(-1);
	}
	else
	{
		newnode->data = dat;
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
//4、尾删
void SListPopBack(SListNode** pphead, ElementType dat)
{
	assert(pphead!=NULL);
	assert(*pphead!=NULL);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* pre = NULL;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		pre->next = NULL;
	}

}
//5、头删
void SListPopFront(SListNode* *pphead)
{
	assert(pphead!=NULL);
	assert(*pphead!=NULL);
	SListNode* temp = (*pphead)->next;
	free(*pphead);
	*pphead = NULL;
	*pphead = temp;
}

//6、查找
SListNode* SListFind(SListNode* phead,ElementType fin)
{
	assert(phead!=NULL);
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == fin)
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

//7、想前插入
void SListInsertFront(SListNode**pphead, SListNode* pos, ElementType dat)
{
	assert(pos != NULL);
	assert(pphead!=NULL);
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("Failed to creat new space!\n");
		exit(-1);
	}
	newnode->data = dat;

	if (pos == *pphead)
	{
		SListPushFront(pphead,dat);
	}
	else
	{
		SListNode* prepos = *pphead;
		while (prepos->next != pos)
		{
			prepos = prepos->next;
		}
		prepos->next = newnode;
		newnode->next = pos;
	}
}
//8、向后插入
void SListInsertAfter(SListNode** pphead, SListNode* pos, ElementType dat)
{
	assert(pos != NULL);
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("Failed to creat new space!\n");
		exit(-1);
	}
	newnode->data = dat;
	newnode->next = pos->next;
	pos->next = newnode;
}
//9、删除
void SListErase(SListNode** pphead, SListNode* pos)
{
	assert(pos!=NULL);
	assert(pphead!=NULL);
	assert(*pphead!=NULL);
	if (pos == *pphead)
	{
		SListPopFront(pphead);
	}
	else
	{
		SListNode* prepos = *pphead;
		while (prepos->next != pos)
		{
			prepos = prepos->next;
		}
		prepos->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//10、销毁
void SListDestory(SListNode** pphead)
{
	assert(pphead!=NULL);
	assert(*pphead!=NULL);
	SListNode* cur = *pphead;
	while (cur!=NULL)
	{
		SListNode* temp = cur->next;
		free(cur);
		cur = NULL;
		cur = temp;
	}
	*pphead = NULL;
}