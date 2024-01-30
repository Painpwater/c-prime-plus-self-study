#include <stdio.h>

int main(void)
{
    float high,cm;
    cm = 2.54f;

    printf("Please enter your high/yingcun:");
    scanf("%f",&high);
    printf("Your high/cm = %.2f",high*cm);

    return 0;
}