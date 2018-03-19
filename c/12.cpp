//输入样例:
//	5
//输出样例:
//    1    2    4    5    6    8    9   12   15  149  156
#include<stdio.h>
int main()
{
 int i,j,x,t,k,a[10]={1,2,4,6,8,9,12,15,149,156};
    scanf("%d",&x);
    for(i=0;i<10;i++)
      if(a[i]>x)
         break;
    t=i;
 for(j=9;j>=t;j--)
     a[j+1]=a[j];
 a[t]=x;
 for(k=0;k<=10;k++)
        printf("%5d",a[k]);
 printf("\n");
}
