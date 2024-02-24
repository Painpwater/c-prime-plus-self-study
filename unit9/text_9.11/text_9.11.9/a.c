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
    double pow =1.0;
    if(n==0 && p==0)
    {
        printf("0的0次幂未定义.\n");
        return 1.0;
    }   
    if(n==0)    
        return 0;           // 0的任何（0除外）次幂等于0；
    if(p==0)
        return 1;           // 除0外，任何数的0次幂等于1；
    /*
    if(p>0)
        return power(n,p-1)*n;
    else
        return power(n,p+1)/n;
    */
    
    if(p>=0)
    {
        if(p==1)
            return n;
        else
            return power(n,p-1)*n;
    }
    else
    {
        if(p==-1)
            return 1/n;
        else
            return power(n,p+1)*(1/n);
    }
    
}