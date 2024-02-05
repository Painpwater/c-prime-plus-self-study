#include <stdio.h>

int main(void)
{
    int total,danjia,money,kong,huan,left;
    danjia = 1;
    printf("Enter your money:");
    scanf("%d",&money);
    total = money / danjia;
    kong = total;
    
    while (kong >=2)
    {
        huan = kong /2;  //第一次换的数量
        left = kong % 2; //第一次剩下的数量      
        total = huan + total ; //第一次换完之后瓶子的总数量，换的加上原先总共的；
        kong = huan + left; //第一次换完之后的空瓶子数量 ，换的加上剩余的；
    }
    printf("%d",total);
    
    return 0;
}