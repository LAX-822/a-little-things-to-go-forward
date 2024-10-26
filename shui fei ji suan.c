#include<stdio.h>
int main()
{
    float x=2.35;
    float y,m;//x为水的单价，y为用水量，m为总价//

    printf("请输入本月的用水量\n");
    scanf("%lf",&y);
    if ( y < 50 ) m == 2.35*y;
    if ( y = 50 ) m == 48;
    if ( y > 50 ) m == 48+2.35*(y-50);
    printf("本月的水费为%lf",m);    
   

    return 0;
}