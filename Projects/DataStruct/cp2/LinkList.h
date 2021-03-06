#include "../Status/Status.h"

#define MAXSIZE 100

#ifndef Node_H
#define Node_H
typedef int ElemType;

typedef  struct  LNode
{
    ElemType  data;       //结点的数据域
    struct  LNode  *next; //结点的指针域
}LNode;
typedef LNode *LinkList;
typedef LNode *Position;

/*构造一个空的线性表L */
Status InitLinkList(LinkList L);
int ListLength(LinkList L);
/*操作结果,用e返回L中第i个数据中元素的值*/
Status GetElem(LinkList L, int i, ElemType *e);
/*在链表的i个节点位置之前插入新的数据元素e,L的长度加一*/ 
Status LinkListInsert(LinkList L, int i, ElemType e);
/*删除链表的第i个节点,用e返回其值,L的长度*/
 Status LinkListDelete(LinkList L, int i, ElemType *e); 

#endif