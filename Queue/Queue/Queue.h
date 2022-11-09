#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int ElementType;

typedef struct QueueNode
{
	QueueNode* next;
	ElementType data;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

//初始化队列
void QueueInit(Queue* q);
//销毁队列
void QueueDestory(Queue*q);
//删除头部元素
void QueuePop(Queue*q);
//尾部插入元素
void QueuePush(Queue*q,ElementType dat);
//判断是否为空
bool QueueEmpty(Queue*q);
//获取队列中的元素个数
int QueueSize(Queue*q);
//获取队列中的头部元素
ElementType QueueFront(Queue*q);
//获取队列中的尾部元素
ElementType QUeueBack(Queue*q);