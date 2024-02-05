// 递增：前缀和后缀
#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while (super <5)
    {
        super++; //先用super，再super= super+1
        ++ultra; //先ultra = ultra+1，再用ultra；
        printf("super =%d,ultra =%d\n",super,ultra);
    }
    
    return 0;
}