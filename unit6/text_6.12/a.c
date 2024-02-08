// 计算数的整数幂
#include <stdio.h>
double power(double n,int p);

int main(void)
{
    double x,xpow;
    int exp;

    printf("Please enter x and exp:");
    while(scanf("%lf %d",&x,&exp)==2)
    {
        xpow =power(x,exp);
        printf("%.3lf to the power %d is %.3lf.\n",x,exp,xpow);
        printf("Please enter x and exp:");
    }
    printf("Done");

    return 0;
}
double power(double n,int p)
{
    double pow = 1;
    int i;

    for(i = 1;i<=p;i++)
    {
        pow *=n;
    }
    
    return pow;
}