#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

int ArrayShift( int a[], int n, int m )
{
	if(n>10&&m>10)
	{
	return 0;
	}
	else{

	int *p=a;
	int i,j,k,t,q,x;
	x=q=t=m;
	for(i=0;i<m;i++)
	{
		j=p[i];
		k=p[n-t];
		p[i]=k;
		p[n-t]=j;
		t--;
			
	}
	for(i=0;i<m;i++)
	{
		k=p[x];
		j=p[n-q];
		p[x]=j;
		p[n-q]=k;
		x++;
		q--;
	}
		}
    
}
