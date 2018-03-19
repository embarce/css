#include<stdio.h>
int main()
{
	int i,x,k,n,t;
	int a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++)
	{
		x=k;
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[x])
			{
				x=i;
			}
		}
		t=a[x];
		a[x]=a[k];
		a[k]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
} 
