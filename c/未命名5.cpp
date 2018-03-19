#include<stdio.h>
#include<string.h>
int main()
{
	int n,a[50],i;
	scanf("%d",&n);
	char b[50][100];
	int j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%s",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[i]!=a[j]&&a[i]<=1&&a[j]<=1)
			{
		
			a[i]=2;
			a[j]=2;
			printf("%S %s\n",b[i],b[j]);
			break;
			}
		}
	}
	return 0;
	
}
