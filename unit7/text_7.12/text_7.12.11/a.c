#include <stdio.h>
#define PRICE_YJ 2.05
#define PRICE_TC 1.15
#define PRICE_HLB 1.09

int main(void)
{
    float sum1,discount,freight,sum2,sum3;
    int weight_yj,weight_tc,weight_hlb,weight_sum,num;
    weight_yj = weight_tc= weight_hlb = weight_sum = 0;
    char ch;
    printf("请输入选项:\n");
    while(ch=getchar())
    {
        switch (ch)
        {
        case 'a':
            printf("请输入要买洋蓟的磅数：\n");
            scanf("%d",&weight_yj);
            sum1 += weight_yj *PRICE_YJ;
            weight_sum +=weight_yj;
            break;
        case 'b':
            printf("请输入要买甜菜的磅数：\n");
            scanf("%d",&weight_tc);
            sum1 += weight_tc *PRICE_TC;
            weight_sum +=weight_tc;
            break;
        case 'c':
            printf("请输入要买胡萝卜的磅数：\n");
            scanf("%d",&weight_hlb);
            sum1 += weight_hlb *PRICE_HLB;
            weight_sum +=weight_hlb;
            break;
        case 'q':
            printf("退出订购\n");
            break;
        }
        if(ch == 'q')
            break;
        while(getchar() !='\n')                 // 跳过回车符
            continue;
        printf("请继续输入选项:\n");
    }
    if(sum1>=100)
        discount =sum1*0.05;
        sum1 *=0.95;
    if(weight_sum<=5)
        sum2 = 6.5;
    else if(weight_sum<=20)
        sum2 = 14;
    else
        sum2 = 14+(weight_sum-20)*0.5;               //物品售价  订购的重量  订购的蔬菜费用  
    sum3 = sum1+sum2;
    printf("洋蓟的售价：%.2f    洋蓟的磅数：%d      洋蓟的费用：%.2f\n",PRICE_YJ,weight_yj,weight_yj*PRICE_YJ);
    printf("甜菜的售价：%.2f    甜菜的磅数：%d      甜菜的费用：%.2f\n",PRICE_TC,weight_tc,weight_tc*PRICE_TC);
    printf("胡萝卜的售价：%.2f  胡萝卜的磅数：%d    胡萝卜的费用：%.2f\n",PRICE_HLB,weight_hlb,weight_hlb*PRICE_HLB);
    printf("订单的总费用 订单的折扣  运费和包装费  所有费用总额\n");
    printf("%-12.2f %-12.2f%-12.2f  %-12.2f",sum1,discount,sum2,sum3);

    return 0;
}