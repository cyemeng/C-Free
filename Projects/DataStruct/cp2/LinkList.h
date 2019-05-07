#include "../Status/Status.h"

#define MAXSIZE 100

#ifndef Node_H
#define Node_H
typedef int ElemType;

typedef  struct  LNode
{
    ElemType  data;       //����������
    struct  LNode  *next; //����ָ����
}LNode;
typedef LNode *LinkList;
typedef LNode *Position;

/*����һ���յ����Ա�L */
Status InitLinkList(LinkList L);
int ListLength(LinkList L);
/*�������,��e����L�е�i��������Ԫ�ص�ֵ*/
Status GetElem(LinkList L, int i, ElemType *e);
/*��������i���ڵ�λ��֮ǰ�����µ�����Ԫ��e,L�ĳ��ȼ�һ*/ 
Status LinkListInsert(LinkList L, int i, ElemType e);
/*ɾ�������ĵ�i���ڵ�,��e������ֵ,L�ĳ���*/
 Status LinkListDelete(LinkList L, int i, ElemType *e); 

#endif