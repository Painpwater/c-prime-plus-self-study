#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num,i,j;
    bool isPrime;

    printf("Enter you number:\n");
    while((scanf("%d",&num)==1) && num>0)
    {
        for(i=2;i<=num;i++)
        {
            for(j=2,isPrime= true;j*j<=i;j++)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                    break;
                }   
            }
            if (isPrime)
            {
                printf("%d  ",i);
            }
            
        }
        printf("\nEnter you number:\n");
    }

    return 0;
}