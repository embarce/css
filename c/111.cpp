#include<stdio.h>
int main()
{
	int a[10000];
	int i,j,k,x,y;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>j)
		{
			x=i;
			j=a[i];
		}
	}
	j=a[x];
	a[x]=a[n-1];
	a[n-1]=a[x];
	k=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<k)
		{
			y=i;
			k=a[i];
		}
	}
	k=a[y];
	a[y]=a[n-1];
	a[n-1]=k;
	for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    } 
    return 0;
	
} 
