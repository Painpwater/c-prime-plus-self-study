#include <stdio.h>
#include <float.h>


int main(void)
{
    double num1  =1.0/3.0;
    float num2 =1.0/3.0;

    printf("%.6f %.6f\n",num1,num2);
    printf("%.12f %.12f\n",num1,num2);
    printf("%.15f %.15f\n",num1,num2);
    printf("%d %d\n",FLT_DIG,DBL_DIG);

    return 0;
}