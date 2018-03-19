/*求F（n）的值，当n=0时，F（n）值为1；当n>0时，
F（n）=n*F（nDIV 2） */
#include<stdio.h>
double F(int n);
int main()
{
	int n;
	scanf("%d",&n);
	double s;
	s=F(n);
	printf("%2f",s);
	return 0;
}
double F(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*F(n/2);
	}
}
