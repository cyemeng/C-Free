#include <stdio.h>
#include "SqQueue.h"
#include "../Status/Status.h"

void InitSqQueue(SqQueue *Q)
{
	Q->rear = 0;
	Q->front = 0; 
}

int GetSqQueueLength(SqQueue *Q){
	return (Q->rear - Q-> front + MAXSIZE) %MAXSIZE;
}

Status EnQueue(SqQueue *Q, ElementType e)
{
	
	if(IsSqQueuFull(Q))
		return ERROR;
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1)% MAXSIZE; 
	return OK;
	
}

int IsSqQueuEmpty(SqQueue *Q)
{
	if(Q->rear == Q->front){
		return TRUE;
	}
	return FALSE;
}

int IsSqQueuFull(SqQueue *Q)
{
	if(GetSqQueueLength(Q) + 1 == MAXSIZE){
		printf("��������!\n");
		return TRUE;
	}
	return FALSE;
}

Status DeQueue(SqQueue *Q, ElementType *e)
{
	if(IsSqQueuEmpty(Q)){
		printf("�����ѿ�!\n");
		return ERROR;
	}
	*e = Q->data[Q->front];
	Q->front = (Q->front + 1)% MAXSIZE;
	printf("������������Ϊ:%d!\n",*e); 
	return OK;
}