#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define ERROR -1
#define MAXSIZE 5
typedef int Postion;
typedef char ElementType;
struct LNode
{
	 ElementType Data[MAXSIZE];
	Postion  Last;
};
typedef struct LNode * PtrToLNode;
typedef PtrToLNode List;
bool Delete(List L, int i)
{
	int j;
	if(i<1||i>L->Last+1)
	{
		printf("sorrry %d no found\n",i);
		return false;
	} 
	for(j=i;j<=L->Last;j++)
	{
		L->Data[j-1]=L->Data[j];
	}
	L->Last--;
	return true;
}
List MakeEMpty()
{
	List L;
	L=(List)malloc(sizeof(struct LNode));
	L->Last=-1;
	return L;
}
int Find(List L,ElementType X)
{
	Postion i=0;
	while(i<=L->Last&&L->Data[i]!=X)
	{
		i++;
	}
	if(i>L->Last)
	{
		return ERROR;
	}
	else
	{
		return i;
	}
}
bool Insert(List L,ElementType X,int i)
{
	Postion j;
	if(L->Last==MAXSIZE-1)
	{
		printf("full\n");
		return false;
	}
	if(i<1||i>L->Last+2)
	{
		printf("false do\n");
		return false;
	}
	for(j-L->Last;j>-i-1;j--)
	{
		L->Data[j+1]=L->Data[j];
		printf("ok read Data \n");
	}
	L->Data[i-1]=X;
	L->Last++;
	return true;
}
//int Length(List L)
//{
//	Postion k;
//	int cnt=0;
//	k=L;
//	while(k!=NULL)
//	{
//		k=k->Next;
//		cnt++;
//	}
//	return cnt-1;
//
//}
int ListEmpty(List L)
{
	return(L->Last==-1);
}
void DispList(List L)
{
	int i;
	if(ListEmpty(L))return;
	for(i=0;i<=L->Last;i++)
	{
		printf("%c",L->Data[i]);
	}
	printf("\n");
}
//#define CW NULL
//int GetElem(List L,int i,Elementype X)
//{
//	Position tmp,pre;
//	tmp=(Position)malloc(sizeof(struct LNode));
//	tmp->Data=X;
//	if(i==1)
//	{
//		tmp->Next=L;
//		return tmp;
//	}
//	else
//	{
//		int cnt=1;
//		pre=L;
//		while(pre&&cnt<i-1)
//		{
//			pre=pre->Next;
//			cnt++;
//		}
//		if(pre==NULL||cnt!=i-1)
//		{
//			printf("插入位置参数错误\n");
//			free(tmp);
//			return CW;
//		}
//		else
//		{
//			tmp->Next=pre->Next;
//			pre->Next=tmp;
//			return L;
//		}
//	}
//}
int main()
{
	printf("WELLCOME THE USE THE SYSTEM!\n");
	List L;
	ElementType e;
	L=MakeEMpty();
	int i=0;
	int a=1;
	int j;
	int cnt=0;
	while(a>=0)
	{
		printf("************************************\n");
		printf("*         1------建表              *\n");
		printf("*         2------插入              *\n");
		printf("*         3------删除              *\n");
		printf("*         4------显示              *\n");
		printf("*         5------查找              *\n");
		printf("*         6------求表长            *\n");
		printf("*         0------返回              *\n");
		printf("************************************\n");
		scanf("%d",&j);
		a=j;
		switch(j)
		{
			case 1:
			{
	//			List L;
	//			ElementType e;
				printf("建表成功！表单开始初始化,初始化完成！\n");
	//			L=MakeEMpty();
				break;
			} 
			case 2:
				{
					printf("请输入想要插入的数据:\n按照格式：元素 想插入的位置。\n");
					char X;
					scanf("%1c %1d",&X,&i);
					Insert(L,X,i);
					cnt++;
					break;
				}
			case 3:
				{
					printf("请输入想要删除的数据的位置\n");
					scanf("%d",&i);
					Delete(L,i); 
					break;
				}
			case 4:
				{
					for(i=0;i<=cnt;i++)
					{
						printf("%c\n",L->Data[i]);
					}
					break;
				}
			case 5:
				{
					char t;
					int k;
					printf("请输入想要查找的元素：\n");
					scanf("%c",&t);
					k=Find(L,t);
					if(k!=-1)
					{
					printf("你要找的在第%d位\n",k);
					}
					else
					{
						printf("抱歉没找到\n");
					}
					break;
				}
			case 6 :
			{
				printf("%d\n",cnt);
				break;
			}
		}
			
	}
	return 0;
}

