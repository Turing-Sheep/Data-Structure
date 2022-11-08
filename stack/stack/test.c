#define  _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

void test01()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 6);
	printf("%d\n",StackSize(&st));
	while (!StackEmpty(&st))
	{
		printf("%d  ",StackTop(&st));
		StackPop(&st);
	}

	StackDestory(&st);
}

int main()
{
	test01();
	return 0;
}