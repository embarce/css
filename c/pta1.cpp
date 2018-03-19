#include <stdio.h>
struct student					
{
int num;
char name[15];
float score[3];
float sum;
};
void calc(struct student *p,int n);	 
void sort(struct student *p,int n);
int main()
{
struct student stu[5];
int i,j;
float f;
for(i=0;i<5;i++)
{
	scanf("%d%s",&stu[i].num,stu[i].name);
	for(j=0;j<3;j++)
	{ 
    	scanf("%f",&f);
		stu[i].score[j]=f;
	}
}
calc(stu,5);
sort(stu,5);
for(i=0;i<5;i++)
{
	printf("%5d%15s",stu[i].num,stu[i].name);
	printf("  %.1f  %.1f  %.1f  %.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2], stu[i].sum);
}
return 0;
}
void calc(struct student *p,int n)
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		p[i].sum=0;
	}
	for(i=0;i<=5;i++)
	{
		p[i].sum=p[i].score[0]+p[i].score[1]+p[i].score[2];
	}
}	 
void sort(struct student *p,int n)
{
	int i,j,x;
	struct student t;
	for(i=0;i<=4;i++)
	{
		x=i;
		for(j=i+1;j<5;j++)
			if(p[j].sum>p[x].sum)
			x=j;
		t=p[x];
		p[x]=p[i];
		p[i]=t;
	}
}
