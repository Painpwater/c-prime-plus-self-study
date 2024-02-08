#include <stdio.h>

int main(void)
{
    int min,max,sum,count;

    printf("Enter max and min:");
    
    while(scanf("%d %d",&max,&min)==2,min<=max)
    {
        for(sum=0,count=min;count<=max;count++)
        {
            sum += count*count;
        }
         printf("%d to %d is %d\n",min,max,sum);
         printf("Enter next max and min:");
    }

    return 0;
}