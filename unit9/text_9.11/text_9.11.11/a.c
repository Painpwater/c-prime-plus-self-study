#include <stdio.h>
void Fibonacci(int n);

int main(void)
{
    int n;
    printf("Enter a number.\n");
    while(scanf("%d",&n)==1)
    {
        if(n>=2)
        {
           Fibonacci(n);
           printf("Enter a number(q to quit)\n");
        }
    }
    
    return 0;
}


void Fibonacci(int n)
{
    unsigned long f1,f2,temp;
    int count;
    f1 = f2 =1;
    for(count=1;count<=n;count++)
    {
        printf("%lu ",f1);
        temp=f1+f2;
        f1 = f2;
        f2 = temp;
    }
    printf("\n");
}