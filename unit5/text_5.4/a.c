//几种常见的语句
#include <stdio.h>

int main(void)
{
    int count,sum; //声明,不是语句

    count = 0;  //赋值表达式语句
    sum = 0;
    while (++count<21)
    {                                   //复合语句
        sum = sum + count;
        printf("%d %d\n",count ,sum);
    }
    printf("sum=%d\n",sum);        //函数表达式语句

    return 0;
}