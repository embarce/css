#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define ERROR -1
typedef char ElementType;
typedef struct LNode *PtrToLNode;
struct LNode
{
	ElementType Data;
	PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;
int Length(List L)
{
	Position p;
	int cnt=0;
	p=L;
	while(p)
	{
		p=p->Next;
		cnt++;
	}
	return cnt;
}
ElementType FindKTh(List L,int K)
{
	Position p;
	int cnt=1;
	p=L;
	while(p&&cnt<K)
	{
		p=p->Next;
		cnt++;
	}
	if((cnt==K)&&p)
	{
		return p->Data;
	}
	else
	{
		return ERROR;
	}
}
Position Find(List L,ElementType X)
{
	Position p=L;
	while(p&&p->Data!=X)
	{
		p=p->Next;
	}
	if(p)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}
List Insert(List L,ElementType X,int i)
{
	Position tmp,pre;
	tmp=(Position)malloc(sizeof(struct LNode));
	tmp->Data=X;
	if(i==1)
	{
		tmp->Next=L;
		return tmp;
	}
	else
	{
		int cnt=1;
		pre=L;
		while(pre&&cnt<i-1)
		{
			pre=pre->Next;
			cnt++;
		}
		if(pre==NULL||cnt!=i-1)
		{
			printf("插入位置参数错误\n");
			free(tmp);
			return NULL;
		}
		else
		{
			tmp->Next=pre->Next;
			pre->Next=tmp;
			return L;
		}
	}
}
List MakeEmpty()
{
	List L;
	L=(Position)malloc(sizeof(struct LNode));
	L->Next=NULL;
	return L;
}
bool Delete(List L,int i)
{
	Position tmp,pre;
	int cnt=0;
	pre=L;
	while(pre&&cnt<i-1)
	{
		pre=pre->Next;
		cnt++;
	}
	if(pre==NULL||cnt!=i-1||pre->Next==NULL)
	{
		printf("flase Eorr\n");
		return false;
	}
	else
	{
		tmp=pre->Next;
		pre->Next=tmp->Next;
		free(tmp);
		return true;
	}
}
int main()
{
	return 0;
}
