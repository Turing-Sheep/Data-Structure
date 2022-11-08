#define  _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

void StackInit(ST* ps)
{
	assert(ps!=NULL);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void StackDestory(ST*ps)
{
	assert(ps!=NULL);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->a = 0;
}

void StackPush(ST* ps, ElementType dat)
{
	assert(ps!=NULL);
	if (ps->top == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		ElementType* temp = realloc(ps->a,sizeof(ST)*newcapacity);
		if (temp == NULL)
		{
			printf("Failed to realloc!\n");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = dat;//top是原数组中最后一个元素的下一个位置
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

ElementType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));//防止越界访问
	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
	//top是尾部元素的下一个位置，所以他也代表着元素个数
}

bool StackEmpty(ST*ps)
{
	assert(ps);
	if (ps->top == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}