#define  _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void test01()
{
	SeqList SL;
	//����˳����ʼ����
	SeqListInit(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳����β��ʹ�ӡ
	SeqListPushBack(&SL,0);
	SeqListPushBack(&SL,10);
	SeqListPushBack(&SL,20);
	SeqListPushBack(&SL,30);
	SeqListPushBack(&SL,40);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
			, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳����ͷ��ʹ�ӡ
	SeqListPushFront(&SL,50);
	SeqListPushFront(&SL,60);
	SeqListPushFront(&SL,70);
	SeqListPushFront(&SL,80);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳�������٣�
	SeqListDestroy(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
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
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳����β��ɾ��
	SeqListPopBack(&SL);
	//SeqListPopBack(&SL);
	//SeqListPopBack(&SL);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳����ͷ��ɾ��
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
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
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳�����������
	SeqListInsert(&SL,1,50);
	SeqListInsert(&SL, 0, 60);
	SeqListInsert(&SL, 2, 70);
	SeqListInsert(&SL, 8, 70);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳�������ɾ��
	SeqListErase(&SL,3);
	SeqListPrint(&SL);
	printf("˳����ַΪ��%p ˳��������Ϊ��%d ˳����Ԫ�ظ���Ϊ��%d\n"
		, SL.a, SL.capacity, SL.size);
	printf("------------------------------------------------------------------\n");
	//����˳���Ĳ��ҹ��ܣ�
	int ret=SeqListFind(&SL,70);
	if (ret == -1)
	{
		printf("δ�ҵ���\n");
	}
	else
	{
		printf("�Ѿ��ҵ����±�Ϊ��%d",ret);
	}
}




int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}