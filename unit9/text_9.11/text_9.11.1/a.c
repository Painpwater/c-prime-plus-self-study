#include <stdio.h>
double min(double x,double y);

int main(void)
{
    double num;
    num=min(1.0,5.0);
    printf("num= %lf.\n",num);

    return 0;
}


double min(double x,double y)
{
    double mina;
    mina=(x<y) ? x : y;
    return mina;
}