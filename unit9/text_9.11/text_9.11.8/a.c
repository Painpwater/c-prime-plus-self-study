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
        printf("%.3lf的%d次幂 is %.3lf.\n",x,exp,xpow);
        printf("Please enter x and exp:");
    }
    printf("Done");

    return 0;
}
double power(double n,int p)
{
    double pow = 1;
    int i;
    if(n==0 && p==0)
        printf("0的0次幂未定义.\n");
    if(p>0)
    {
        for(i = 1;i<=p;i++)
        {
            pow *=n;
        }
    }
    else if(p<0)
    {
        /*
        p=-p;
        for(i = 1;i<=p;i++)
        {
            pow *=1/n;
        }
        */
       for(i=1;i<-p;i++)
       {
        pow *=n;
       }
       pow = -pow;
    }
    
    
    return pow;
}