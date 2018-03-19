 #include<stdio.h>   
struct stu
{  
    int num;  
    int m;  
    int e;  
    int c;  
    double avg;  
    char name[20];  
}; 
int main()
{
	int i,n;
	n=5;
	struct stu student[50];
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d %d %d",&student[i].num,&student[i].name,&student[i].m,&student[i].e,&student[i].c);
		student[i].avg=(student[i].m+student[i].e+student[i].c)/3.0;
	}
	for(i=0;i<n;i++)
	{
		printf("%5d%5s %.1f\n",student[i].num,student[i].name,student[i].avg);
	}
	return 0;
}
