#include <stdio.h>
double fa(double num1,double num2);

int main(void)
{
    double num1,num2;
    printf("Enter two double number:");
    while(scanf("%lf %lf",&num1,&num2)==2)
    {
        printf("%lf\n",fa(num1,num2));
        printf("Enter two double number(q to quit):");
    }
    return 0;
}
double fa(double num1,double num2)
{
    double num;
    num = (num1-num2)/(num1*num2);
    
    return num;
}
