
#include <stdio.h>

/*int main(void)                                    // 使用for循环的计数循环
{
    const int NUMBER =22;
    int count;

    for ( count=1; count < NUMBER; count++)
    {
        printf("Be my valentine!\n");
    }

    return 0;
}*/

int main(void)                                      // 使用for循环创建一个立方表
{
    int num;

    printf("    n  n cubed\n");      
    for(num = 1; num<=6;num++)
    {
        printf("%5d    %-5d\n",num,num*num*num);
    }               

    return 0;
}