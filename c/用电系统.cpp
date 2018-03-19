#include<stdio.h>
#include<string.h>
struct dq
{
	int dl;
	char name[30];
	int power;
	
};
int main()
{
	struct dq b[50],t;
	printf("WELLCOME THE USE THE SYSTEM!\n");
	int a=1,n=0,i=0,day=0,jb[1000],bz,y,x;
	int j=0;
	int k;
	int sum=0,e=0;
	double pay,avg;
	while(a>0&&a<=6)
	{
		printf("系统功能菜单选择\n");
		printf("1.添加用电器\n");
		printf("2.查询单个用电器\n"); 
		printf("3.对用电器进行排序\n");
		printf("4.判断是否超负荷\n");
		printf("5.估计用电量\n");
		printf("6.检查电器的好坏\n");
		printf("0.退出系统\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("请输入想要添加的用电器数量");
				scanf("%d",&n);
				printf("电量 名字 额定功率\n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&b[i].dl);
					scanf("%s",b[i].name);
					scanf("%d",&b[i].power);
				}
				printf("添加成功\n");
				printf("这是你添加的用电器\n");
				for(i=0;i<n;i++)
				{
					printf("第%d个用电器\n",i+1);
					printf("%d\n",b[i].dl);
					printf("%s\n",b[i].name);
					printf("%d\n",b[i].power);
				}
				break;
				
			case 2:
				printf("请输入想要查询的用电器编号\n");
				scanf("%d",&j);
				j=j-1;
				if(j>n||j<0)
				{
					printf("请输入正确的编号\n");
					break;
				}
				else
				{
					printf("第%d个用电器\n",j+1);
					printf("%d\n",b[j].dl);
					printf("%s\n",b[j].name);
					printf("%d\n",b[j].power);	
				}
				break;
			case 3:
				printf("请选择想要使用的排序方法\n"); 
				printf("7为选择排序 8冒泡排序\n");
				scanf("%d",&k);
				switch(k)
				case 7:
					for(i=1;i<n;i++)
					{
						for(j=0;j<n-i;j++)
						{
							if(b[j].dl>b[j+1].dl)
							{
								t=b[j];
								b[j]=b[j+1];
								b[j+1]=t;
							}
						}
						
					}
					printf("排序成功！\n");
					for(i=0;i<n;i++)
					{
						printf("%d %s\n",i+1,b[i].name);
					}
				break;
				case 8: 
					for(j=0;j<n-1;j++)
					{
						x=j;
						for(i=j+1;i<n;i++)
						{
							if(b[i].dl<b[x].dl)
							{
								x=i;
							}
						}
						t=b[x];
						b[x]=b[j];
						b[j]=t;
					}
					for(i=0;i<n;i++)
					{
						printf("%d %s\n",i+1,b[i].name);
					}
					break;
					
			break;
			case 4:
				for(i=0;i<n;i++)
				{
					sum+=b[i].power;
					
				}
				if(sum>500)
				{
					printf("运行功率超载了%d\n",sum-500);
				}
				else
				{
					printf("可以在运行功率范围内功率为%dw\n",sum);
				}
			break;
			case 5:
				sum=0;
				for(i=0;i<n;i++)
				{
					sum+=b[i].dl;
				}
				if(sum<=50)
				{
					pay=sum*0.538;
				}
				else if(sum<=200&&sum>=51)
				{
					pay=50*0.538+(sum-50)*0.568;
				}
				else if(sum>200)
				{
					pay=0.538*50+200*0.568+(sum-200)*0.638;
				}
				printf("这是你这个月要交的电费%.2f\n",pay);
			break;
				
			case 6:
				printf("输入天数\n");
				scanf("%d",&day);
				printf("输入各天用电量\n");
				for(i=0;i<day;i++)
				{
					scanf("%d",&jb[i]);
					e=e+jb[i];
				} 
				avg=e/day;
				printf("标准值为%.2f\n",avg);
				printf("请输入这天的电量\n");
				scanf("%d",&bz);
				if((bz-avg)*100>20)
				{
					printf("电器损坏\n"); 
				}
				else
				{
					printf("电器良好\n");
				}
			break;
			default : break;
				
		}
	}
	return 0;
} 
