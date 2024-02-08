#include <stdio.h>

int main(void)
{
    int min,max;

    printf("Enter min and max:");
    scanf("%d %d",&min,&max);
    
    for(;min<=max;min++)
    {
        printf("%d\t%d\t%d\n",min,min*min,min*min*min);
    }

    return 0;
}