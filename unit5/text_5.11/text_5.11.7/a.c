#include <stdio.h>
double lifang(double n);

int main(void)
{
    double num;

    printf("Enter a number:");
    scanf("%lf",&num);
    num = lifang(num);
    printf("%lf",num);

    return 0;
}

double lifang(double n)
{
    double n_;
    n_ = n*n*n;

    return n_;
}