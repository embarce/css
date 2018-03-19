#include<stdio.h>     
int main() 
{  
    int i, j, m, n, t;  
    scanf("%d%d", &m, &n);
	int a[m][n];  
    for(i = 0; i < m; i++)  
        for(j = 0; j < n; j++)  
            scanf("%d", &a[i][j]);  
    t = 0;  
    for(i=1;i<m-1;i++) 
	{  
        for(j=1;j<n-1; j++) 
		{  
            if(a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j] > a[i][j + 1]) 
			   {  
                t = 1;  
                printf("%d %d %d\n", a[i][j],i+1,j+1);  
            }  
        }  
    }  
    if(t==0)  
        printf("None %d %d\n", m, n);  
    return 0;  
} 
