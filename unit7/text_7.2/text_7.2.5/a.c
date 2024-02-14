// 使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;              // 待测试的数
    unsigned long div;              // 可以的约数
    bool isPrime;                   // 素数标记prime(质数)

    printf("Enter an integer for analysis(q to quit):");
    while(scanf("%lu",&num)==1)
    {
        for(div=2,isPrime = true; (div*div)<=num;div++)
        {
            if(num % div ==0)
            {
                if((div * div)!= num)
                    printf("%lu is divisible by %lu and %lu.\n",        // 被整除
                            num,div,num/div);
                else
                    printf("%lu is divisible by %lu.\n",num,div);
                isPrime = false;
            }
        }
        if(isPrime)
            printf("该数是素数。\n");
        printf("Enter an integer for analysis(q to quit):");
    }
    printf("Bye.\n");

    return 0;
}