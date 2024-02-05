#include <stdio.h>

int main(void)
{
    int count,sum;

    printf("Enter your days:");
    scanf("%d",&count);
    sum = 0;
    while (count >0)
    {
        sum = sum +count*count;
        count = count -1;
    }
    printf("sum = ￥%d",sum);

    return 0;
}