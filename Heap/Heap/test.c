#define  _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void test01()
{
	Heap hp;
	HeapInit(&hp);
	HeapPush(&hp, 1);
	HeapPush(&hp, 34);
	HeapPush(&hp, 15);
	HeapPush(&hp, 5);
	HeapPush(&hp, 45);
	HeapPush(&hp, 12);
	HeapPush(&hp, 32);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
}

int main()
{
	test01();

	return 0;
}