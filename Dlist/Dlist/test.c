#define  _CRT_SECURE_NO_WARNINGS 1
#include"Dlist.h"

void test01()
{
    DLTnode* plist = DListInit();
    DListPushBack(plist, 1);
    DListPushBack(plist, 2);
    DListPushBack(plist, 3);
    DListPushBack(plist, 4);
    DListPushBack(plist, 5);
   
    DListPushFront(plist, 5);
    DListPushFront(plist, 4);
    DListPushFront(plist, 3);
    DListPushFront(plist, 2);
    DListPushFront(plist, 1);
    DListPrint(plist);
}

void test02()
{
    DLTnode* plist = DListInit();
    DListPushFront(plist, 5);
    DListPushFront(plist, 4);
    DListPushFront(plist, 3);
    DListPushFront(plist, 2);
    DListPushFront(plist, 1);
    DListPrint(plist);
    DListPopBack(plist);
    DListPrint(plist);
    DListPopBack(plist);
    DListPrint(plist);
    DListPopBack(plist);
    DListPrint(plist);
    DListPopBack(plist);
    DListPrint(plist);
    DListPopBack(plist);
    DListPrint(plist);
}

void test03()
{
    DLTnode* plist = DListInit();
    DListPushFront(plist, 5);
    DListPushFront(plist, 4);
    DListPushFront(plist, 3);
    DListPushFront(plist, 2);
    DListPushFront(plist, 1);
    DListPrint(plist);
    DListPopFront(plist);
    DListPrint(plist);
    DListPopFront(plist);
    DListPrint(plist);
    DListPopFront(plist);
    DListPrint(plist);
    DListPopFront(plist);
    DListPrint(plist);
    DListPopFront(plist);
    DListPrint(plist);

}

void test04()
{
    DLTnode* plist = DListInit();
    DListPushFront(plist, 5);
    DListPushFront(plist, 4);
    DListPushFront(plist, 3);
    DListPushFront(plist, 2);
    DListPushFront(plist, 1);
    DListPrint(plist);
    DLTnode*find=DListFind(plist,4);
    if (find != NULL)
    {
        DListInsert(find,40);
        DListPrint(plist);
    }
    else
    {
        printf("Failed to find this element!\n");
    }
    DListErase(find);
    DListPrint(plist);
    DListDestory(&plist);
    if (plist == NULL)
    {
        printf("successfully destory!\n");
    }
}

int main()
{
    //test01();
    //test02();
    //test03();
    test04();
    return 0;
}