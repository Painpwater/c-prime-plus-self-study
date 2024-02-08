#include <stdio.h>

int main(void)
{
    double ch1[8],ch2[8];
    int count1,count2;

    for (count1 = 0;count1<8;count1++)          // 读取数组1
    {
        scanf("%lf",&ch1[count1]);
    }
    
    /*                                          // 嵌套循环
    for (count2 = 0;count2<8;count2++)          // 读取数组2
    {
        for(count1 =0;count1<=count2;count1++)
        {
            ch2[count2] +=ch1[count1];
        }
    }
    */
    for(count1=1,ch2[0]=ch1[0];count1<8;count1++)       // 单循环
    {
        ch2[count1] = ch2[count1-1]+ch1[count1];
    }
    
    
    
    
    for (count1 = 0;count1<8;count1++)          // 输出数组1    
    {
        printf("%5.2lf ",ch1[count1]);
    }
    printf("\n");
    for (count2 = 0;count2<8;count2++)          // 输出数组2
    {
        printf("%5.2lf ",ch2[count2]);
    }


    return 0;
    
}