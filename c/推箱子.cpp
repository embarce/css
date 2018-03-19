#include <graphics.h>
#include <stdio.h>
#include <time.h>
/*
1.定义图片变量 IMAGE ---int
2.loadimage加载资源 ---把图片放到变量里面
3.putimage 把图片粘贴窗口上
//切割技术:随机切割---拼图游戏----图片处理之类
*/
IMAGE mm;
int array2D[3][3] = { 0 };
int array1D[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int pos;
int length=9; //值没有初始化
void loadResource()
{
loadimage(&mm, "gg.jpg",900, 900);
//随机初始化
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{
//产生一个随机下标
pos = rand() % length;//值没有初始化
array2D[i][j] = array1D[pos];
//调整数组
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
//格式和路径
initgraph(900, 900);
srand((unsigned int)time(NULL));
loadResource();
userUI();
getchar();
closegraph();
return 0;
}
