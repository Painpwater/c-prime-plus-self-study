#include <stdio.h>
const int C = 10;

int main(void)
{
    int num,n;
    
    printf("Enter a number(int):\n");
    scanf("%d",&num);
    n=num+C;
    num=num-1;
    while (num++<n)
    {
        printf("%d  ",num);
    }

    return 0;
}