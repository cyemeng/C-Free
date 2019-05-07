#include "LinkList.h"
#include <stdlib.h>
#include <stdio.h>

Status InitLinkList(LinkList L)
{
	L = (LNode *)malloc(sizeof(LNode)) ; //����ͷ��� 
	if (!L)  return ERROR; 
	L->next = NULL;                   //ͷ����ָ�����ÿ�
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
		printf("������±���%d�����˵�ǰ����ĳ���%d",i, length); 
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
