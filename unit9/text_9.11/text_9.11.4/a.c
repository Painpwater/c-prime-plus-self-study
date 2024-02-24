#include <stdio.h>
double aver(double x,double y);

int main(void)
{
    double num;
    num=aver(1.0,5.0);
    printf("num= %lf.\n",num);

    return 0;
}


double aver(double x,double y)
{
    double average;
    average = 1.0/((1.0/x+1.0/y)/2);
    
    return average;
}