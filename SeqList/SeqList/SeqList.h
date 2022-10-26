#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ElementType;//定义元素类型

typedef struct SeqList
{
	ElementType* a;//记录堆区开辟的内存空间

	int size;//元素的实际个数
	int capacity;//元素的最大容量

} SeqList; //定义动态顺序表的结构体，并重命名

//接口函数：
//1、初始化顺序表
void SeqListInit(SeqList*SL);
//2、尾插
void SeqListPushBack(SeqList *SL,ElementType data);
//3、尾删
void SeqListPopBack(SeqList *SL);
//4、头插
void SeqListPushFront(SeqList *SL,ElementType data);
//5、头删
void SeqListPopFront(SeqList *SL);
//6、打印
void SeqListPrint(SeqList *SL);
//7、销毁
void SeqListDestroy(SeqList *SL);
//8、检查
void SeqListCheckCapacity(SeqList *SL);
//9、中间插入
void SeqListInsert(SeqList *SL, int pos,ElementType data);
//10、查找
int SeqListFind(SeqList *SL,ElementType data);
//11、中间删除
void SeqListErase(SeqList *SL,int pos);