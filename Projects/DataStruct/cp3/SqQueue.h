
#ifndef SqQueue_H
#define SqQueue_H
#include "../Status/Status.h"

#define MAXSIZE 10

typedef int ElementType;
typedef struct
{
	ElementType data[MAXSIZE];
	int rear;
	int front;
}SqQueue;

void InitSqQueue(SqQueue *Q);

int IsSqQueuEmpty(SqQueue *Q);

int IsSqQueuFull(SqQueue *Q);

Status EnQueue(SqQueue *Q, ElementType e);

Status DeQueue(SqQueue *Q, ElementType *e);

#endif
 
