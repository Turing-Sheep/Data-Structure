#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int ElementType;
typedef struct Heap
{
	ElementType* a;
	int size;
	int capacity;
}Heap;

//初始化
void HeapInit(Heap* h);
//销毁
void HeapDestory(Heap* h);
//向上调整
void AdjustUp(Heap* h,int x);
//向下调整
void AdjustDown(Heap* h,int x);
//插入
void HeapPush(Heap* h,ElementType x);
//删除
void HeapPop(Heap* h);
//判断是否为空
bool HeapEmpty(Heap* h);
//返回堆顶
ElementType HeapTop(Heap* h);
//返回堆中的元素个数
int HeapSize(Heap* h);
//打印
void HeapPrint(Heap* h);