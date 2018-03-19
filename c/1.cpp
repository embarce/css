#include <stdio.h>
int main()
{
    #define pi 3.14159265358979323846
    int i;
    double r,h,v;
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                {
                    printf("Please enter the radius:\n");
                    scanf("%lf",&r);
                    v=(4.0/3)*pi*r*r*r; 
                    printf("%.2lf\n",v);
                };break;
            case 2:
                {
                    printf("Please enter the radius and the height:\n");
                    scanf("%lf %lf",&r,&h);
                    v=pi*r*r*h;
                    printf("%.2lf\n",v);
                };break;
            case 3:
                {
                    printf("Please enter the radius and the height:\n");
                    scanf("%lf %lf",&r,&h);
                    v=(1.0/3)*pi*r*r*h;
                    printf("%.2lf\n",v);
                };break;
            default:break;
        };
    }

    return 0;
}
