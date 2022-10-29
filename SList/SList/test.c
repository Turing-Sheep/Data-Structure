#define  _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void test01()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPrint(plist);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 10);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void test02()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 10);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
}

void test03()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 10);
	SListPrint(plist);
	SListNode* pos = SListFind(plist,10);
	if (pos == NULL)
	{
		printf("Fail to find!\n");
	}
	else
	{
		SListInsertFront(&plist,pos,30);
		SListPrint(plist);
	}
	pos = SListFind(plist, 10);
	if (pos == NULL)
	{
		printf("Fail to find!\n");
	}
	else
	{
		SListInsertAfter(&plist, pos, 30);
		SListPrint(plist);
	}
	SListErase(&plist,pos);
	SListPrint(plist);
	SListPrint(plist);
	SListPrint(plist);
	pos = NULL;
}

void test04()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 10);
	SListPrint(plist);
	SListDestory(&plist);
	SListPrint(plist);
}


int main()
{
	test04();
	return 0;
}