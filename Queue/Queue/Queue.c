#define  _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(Queue*q)
{
	assert(q!=NULL);
	q->head = q->tail = NULL;
}

void QueuePush(Queue* q,ElementType dat)
{
	assert(q!=NULL);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("Failed to creat sqace!\n");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = dat;

	if (q->head==NULL)
	{
		q->head = q->tail = newnode;
	}

	q->tail->next = newnode;
	q->tail = newnode;
}

void QueuePop(Queue* q)
{
	assert(q != NULL);
	assert(!QueueEmpty(q));
	QueueNode* nex = q->head->next;
	free(q->head);
	q->head = nex;
	//当队列为空的时候，将头尾指针均设置为空
	if (q->head == NULL)
	{
		q->tail = NULL;
	}
}

bool QueueEmpty(Queue* q)
{
	assert(q);
	if (q->head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int QueueSize(Queue* q)
{
	assert(q!=NULL);
	int nums = 0;
	QueueNode* cur =q->head;
	while (cur != NULL)
	{
		nums++;
		cur = cur->next;
	}
	return nums;
}

ElementType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->head->data;
}

ElementType QUeueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->tail->data;
}

void QueueDestory(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	QueueNode* cur = q->head;
	while (cur!=NULL)
	{
		QueueNode* nex = cur->next;
		free(cur);
		cur = nex;
	}
	q->head = q->tail = NULL;
}