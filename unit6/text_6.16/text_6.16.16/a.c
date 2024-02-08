#include <stdio.h>

int main(void)
{
    double sum1,sum2;
    int year;
    sum1 = sum2 =100.0;

    for(year=1;sum2<=sum1;year++)
    {
        sum1 +=100.0*0.1;
        sum2 *=1.05;
    }
    year--;
    printf("%d年后,sum2(%lf)超过sum1(%lf)",year,sum2,sum1);

    return 0;
}