#include<stdio.h>
void fun(int *p,int n);
int main()
{
	int i;
	int n,a[8];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
} 
void fun(int *p,int n)
{
	int i,j,k,flag=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(p[j]>p[j+1])
			{
				k=p[j];
				p[j]=p[j+1];
				p[j+1]=k;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		} 
	}
}
