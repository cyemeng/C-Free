#include <stdio.h>
#include <stdlib.h>
#include "./cp2/LinkList.h"

int main()
{
	LinkList L;
	InitLinkList(L);
	printf("当前链表长度%d\n", L->data); 
}
 