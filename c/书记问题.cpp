#include<stdio.h>
struct book{
	char name[31];
	double price;
}; 
int main()
{
    struct book book[10],t;
    int i,j,n;
    char ch;
    scanf("%d%c",&n,&ch);
    for(i=0;i<n;i++)
	{
    	gets(book[i].name);
    	scanf("%lf%c",&book[i].price,&ch);
    }
	for(i=0;i<n-1;i++)
	  for(j=i;j<n;j++)
			if(book[i].price>book[j].price){
				t=book[i];
				book[i]=book[j];
				book[j]=t;
			}
	for(i=0;i<n;i++)
	printf("%s %0.1f\n",book[i].name,book[i].price);
    return 0;
}
