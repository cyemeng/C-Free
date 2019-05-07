#include "LinkList.h"
#include <stdlib.h>
#include <stdio.h>

Status InitLinkList(LinkList L)
{
	L = (LNode *)malloc(sizeof(LNode)) ; //申请头结点 
	if (!L)  return ERROR; 
	L->next = NULL;                   //头结点的指针域置空
}

int ListLength(LinkList L)
{
	LinkList p = L;
	int count = 0;
	while(p){
		count++;
		p = p->next;
	}
	return count;
}

Status LinkListInsert(LinkList L, int i, ElemType e)
{
	int length = ListLength(L); 
	if(i >= length){
		printf("插入的下标置%d超出了当前链表的长度%d",i, length); 
		return ERROR;
	}
	Position p = L;
	Position temp;
	int j = 0;
	while(j<i-1 && p != NULL ){
		p = p->next;
		j++;
	}
	temp = malloc(sizeof(struct LNode));
	temp->data = e;
	temp->next = p->next;
	p->next = temp;
	return OK;
}
