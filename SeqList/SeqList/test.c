#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void test01()
{
	SeqList SL;
	//测试顺序表初始化：
	SeqListInit(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的尾插和打印
	SeqListPushBack(&SL,0);
	SeqListPushBack(&SL,10);
	SeqListPushBack(&SL,20);
	SeqListPushBack(&SL,30);
	SeqListPushBack(&SL,40);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
			, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的头插和打印
	SeqListPushFront(&SL,50);
	SeqListPushFront(&SL,60);
	SeqListPushFront(&SL,70);
	SeqListPushFront(&SL,80);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的销毁：
	SeqListDestroy(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
}
void test02()
{
	SeqList SL;
	SeqListInit(&SL);
	SeqListPushBack(&SL, 0);
	SeqListPushBack(&SL, 10);
	SeqListPushBack(&SL, 20);
	SeqListPushBack(&SL, 30);
	SeqListPushBack(&SL, 40);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的尾部删除
	SeqListPopBack(&SL);
	//SeqListPopBack(&SL);
	//SeqListPopBack(&SL);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的头部删除
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	SeqListDestroy(&SL);
}

void test03()
{
	SeqList SL;
	SeqListInit(&SL);
	SeqListPushBack(&SL, 0);
	SeqListPushBack(&SL, 10);
	SeqListPushBack(&SL, 20);
	SeqListPushBack(&SL, 30);
	SeqListPushBack(&SL, 40);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的随机插入
	SeqListInsert(&SL,1,50);
	SeqListInsert(&SL, 0, 60);
	SeqListInsert(&SL, 2, 70);
	SeqListInsert(&SL, 8, 70);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的随机删除
	SeqListErase(&SL,3);
	SeqListPrint(&SL);
	printf("顺序表地址为：%p 顺序表的容量为：%d 顺序表的元素个数为：%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//测试顺序表的查找功能：
	int ret=SeqListFind(&SL,70);
	if (ret == -1)
	{
		printf("未找到！\n");
	}
	else
	{
		printf("已经找到，下标为：%d",ret);
	}
}




int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}