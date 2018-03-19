#include <stdio.h>
int main()
{
    int a[10000],n;
    int i,j,k,x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    j=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<j) 
        {
            x=i;
            j=a[i];
        }
    }
    k=a[x];
    a[x]=a[0];
    a[0]=k;
 
    j=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>j) 
        {
           	y=i;
            j=a[i];
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
