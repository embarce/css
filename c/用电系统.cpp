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
		printf("ϵͳ���ܲ˵�ѡ��\n");
		printf("1.����õ���\n");
		printf("2.��ѯ�����õ���\n"); 
		printf("3.���õ�����������\n");
		printf("4.�ж��Ƿ񳬸���\n");
		printf("5.�����õ���\n");
		printf("6.�������ĺû�\n");
		printf("0.�˳�ϵͳ\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("��������Ҫ��ӵ��õ�������");
				scanf("%d",&n);
				printf("���� ���� �����\n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&b[i].dl);
					scanf("%s",b[i].name);
					scanf("%d",&b[i].power);
				}
				printf("��ӳɹ�\n");
				printf("��������ӵ��õ���\n");
				for(i=0;i<n;i++)
				{
					printf("��%d���õ���\n",i+1);
					printf("%d\n",b[i].dl);
					printf("%s\n",b[i].name);
					printf("%d\n",b[i].power);
				}
				break;
				
			case 2:
				printf("��������Ҫ��ѯ���õ������\n");
				scanf("%d",&j);
				j=j-1;
				if(j>n||j<0)
				{
					printf("��������ȷ�ı��\n");
					break;
				}
				else
				{
					printf("��%d���õ���\n",j+1);
					printf("%d\n",b[j].dl);
					printf("%s\n",b[j].name);
					printf("%d\n",b[j].power);	
				}
				break;
			case 3:
				printf("��ѡ����Ҫʹ�õ����򷽷�\n"); 
				printf("7Ϊѡ������ 8ð������\n");
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
					printf("����ɹ���\n");
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
					printf("���й��ʳ�����%d\n",sum-500);
				}
				else
				{
					printf("���������й��ʷ�Χ�ڹ���Ϊ%dw\n",sum);
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
				printf("�����������Ҫ���ĵ��%.2f\n",pay);
			break;
				
			case 6:
				printf("��������\n");
				scanf("%d",&day);
				printf("��������õ���\n");
				for(i=0;i<day;i++)
				{
					scanf("%d",&jb[i]);
					e=e+jb[i];
				} 
				avg=e/day;
				printf("��׼ֵΪ%.2f\n",avg);
				printf("����������ĵ���\n");
				scanf("%d",&bz);
				if((bz-avg)*100>20)
				{
					printf("������\n"); 
				}
				else
				{
					printf("��������\n");
				}
			break;
			default : break;
				
		}
	}
	return 0;
} 
