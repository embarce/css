#include <graphics.h>
#include <stdio.h>
#include <time.h>
/*
1.����ͼƬ���� IMAGE ---int
2.loadimage������Դ ---��ͼƬ�ŵ���������
3.putimage ��ͼƬճ��������
//�и��:����и�---ƴͼ��Ϸ----ͼƬ����֮��
*/
IMAGE mm;
int array2D[3][3] = { 0 };
int array1D[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int pos;
int length=9; //ֵû�г�ʼ��
void loadResource()
{
loadimage(&mm, "gg.jpg",900, 900);
//�����ʼ��
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
//����һ������±�
pos = rand() % length;//ֵû�г�ʼ��
array2D[i][j] = array1D[pos];
//��������
for (int k = pos; k < length; k++)
{
array1D[k] = array1D[k + 1];
}
length--;
}
}
}
void userUI()
{
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
if (array2D[i][j] < 4)
{
putimage(j * 300, i * 300, 300, 300, &mm, (array2D[i][j] - 1) * 300, 0);
}
else if (array2D[i][j]>6)
{
putimage(j * 300, i * 300, 300, 300, &mm, (array2D[i][j] - 7) * 300,600);
}
else
{
putimage(j * 300, i * 300, 300, 300, &mm, (array2D[i][j] - 4) * 300,300);
}
}
}
}
int main()
{
//��ʽ��·��
initgraph(900, 900);
srand((unsigned int)time(NULL));
loadResource();
userUI();
getchar();
closegraph();
return 0;
}
