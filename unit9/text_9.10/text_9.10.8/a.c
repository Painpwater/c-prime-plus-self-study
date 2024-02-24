#include <stdio.h>
int max(int a,int b,int c);

int main(void)
{
    int x=10,y=12,z=9;
    int maxa;
    maxa=max(x,y,z);
    printf("maxa=%d.\n",maxa);

    return 0;
}

int max(int a,int b,int c)
{
    int d;
    if(a>b)
    {
        if(a>c)
            d=a;
        else
            d=c;
    }
    else
    {
        if(b>c)
            d=b;
        else
            d= c;
    }    
    
    return d;
}