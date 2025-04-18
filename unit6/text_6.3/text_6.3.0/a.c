// 浮点数比较
#include <stdio.h>
#include <math.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What's the value of pi?\n");
    scanf("%lf",&response);
    while (fabs(response - ANSWER)>0.0001)
    {
        printf("Try again!\n");
        scanf("%lf",&response);
    }
    printf("Close enough!\n");

    return 0;
}