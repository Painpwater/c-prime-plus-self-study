#include <stdio.h>

int main(void)
{
    double money = 100.0;
    int year;

    for(year = 1; money>0;year++)
    {
        money *=1.08;
        money -=10;
    }
    year--;
    printf("%d年后会取完钱,此时钱为%lf",year,money);

    return 0;
}