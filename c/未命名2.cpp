#include<stdio.h>
int main()
{
	int a[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};  
int number = 13; //记录圈内剩余的人数  
int count = 0; //通过计算器来模拟报数  
int i = 0; //循环变量  
while (number > 1) {  
    if (a[i] != 0) {  
        count++;  
    }  
    if (count == 3) {  
        a[i] = 0;  //让该元素置0,模拟踢出圈子  
        count = 0; //然后计数器重新归0  
        number--;  //踢出圈子之后人数-1  
    }  
    i++;  
    if (i == 13) {  
        i = 0; //当到最后一个人的时候, 再转到第一个人继续报数  
    }  
}  
for (int j = 0; j < 13; j++) {  
    if (a[j] > 0) {  
        printf("叛徒就是第%d个人.", a[j]);  
    }  
}
return 0;
}
