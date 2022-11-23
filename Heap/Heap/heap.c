#define  _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"
void HeapInit(Heap* h)
{
	assert(h);
	h->a = NULL;
	h->size = h->capacity = 0;
}

void HeapDestory(Heap* h)
{
	assert(h);
	free(h->a);
	h->a = NULL;
	h->size = h->capacity = 0;
}

void AdjustUp(Heap* h, int child)
{
	assert(h);
	while (child>0)
	{
		int parent = (child - 1) >> 1;
		if (h->a[child] < h->a[parent])
		{
			ElementType tmp = h->a[child];
			h->a[child] = h->a[parent];
			h->a[parent] = tmp;
			child = parent;
		}
		else
		{
			break;
		}
	}

}

void AdjustDown(Heap* h, int parent)
{
	assert(h);
	int child = parent * 2 + 1;
	while (child<h->size)
	{
		if (child + 1 < h->size && h->a[child + 1] < h->a[child])
		{
			child++;
		}
		if (h->a[child] < h->a[parent])
		{
			ElementType tmp = h->a[child];
			h->a[child] = h->a[parent];
			h->a[parent] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(Heap* h)
{
	assert(h);
	assert(!HeapEmpty(h));
	ElementType tmp = h->a[0];
	h->a[0] = h->a[h->size - 1];
	h->a[h->size - 1] = tmp;
	h->size--;
	AdjustDown(h,0);
}

void HeapPush(Heap* h,ElementType x)
{
	assert(h);
	if (h->size == h->capacity)
	{
		size_t newcapacity = (h->capacity == 0) ? 4 : 2 * h->capacity;
		ElementType* tmp = realloc(h->a,sizeof(ElementType)*newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		h->a = tmp;
		h->capacity = newcapacity;
	}
	h->a[h->size] = x;
	h->size++;
	AdjustUp(h,h->size-1);
}

bool HeapEmpty(Heap* h)
{
	assert(h);
	return h->size == 0;
}

ElementType HeapTop(Heap* h)
{
	assert(h);
	assert(!HeapEmpty(h));
	return h->a[0];
}

int HeapSize(Heap* h)
{
	assert(h);
	return h->size;
}

void HeapPrint(Heap* h)
{
	assert(h);
	for (int i = 0; i < h->size; i++)
	{
		printf("%d ",h->a[i]);
	}
	printf("\n");
}