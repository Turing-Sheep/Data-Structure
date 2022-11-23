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

//��ʼ��
void HeapInit(Heap* h);
//����
void HeapDestory(Heap* h);
//���ϵ���
void AdjustUp(Heap* h,int x);
//���µ���
void AdjustDown(Heap* h,int x);
//����
void HeapPush(Heap* h,ElementType x);
//ɾ��
void HeapPop(Heap* h);
//�ж��Ƿ�Ϊ��
bool HeapEmpty(Heap* h);
//���ضѶ�
ElementType HeapTop(Heap* h);
//���ض��е�Ԫ�ظ���
int HeapSize(Heap* h);
//��ӡ
void HeapPrint(Heap* h);