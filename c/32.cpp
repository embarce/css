#include<stdio.h>
void fun(int *p,int n);
int main()
{
	int n;
	int i,t;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,n);
	return 0;
}
void fun(int *p,int n) 
{
	int t;
	int i=0;
	int j=0;
	int k=0;
	for(k=0;k<n-1;k++)
	{
		j=k;
		for(i=k+1;i<n;i++)
		{
				if(p[i]<p[j]) j=i;
			t=p[j];
			p[j]=p[k];
			p[k]=t;
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
}
