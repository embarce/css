#include<stdio.h>
int main()
{
	int n;
	int s;
	int i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			s=1;
		} 
	
		else
		{
			s=(i*i/2);
		}
	}
	printf("%d",s);
	return 0;
}
