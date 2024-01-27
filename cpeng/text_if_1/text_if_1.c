//筛选奇数
#include <stdio.h>
int main()
{
    int num = 0;
    printf("请输入一个整数\n");
    scanf("%d",&num);
    if (num % 2 ==1)
    {
        printf("该数为奇数\n");
    }
    else
    {
        printf("该数不是奇数\n");
    }
    
    return 0;
}