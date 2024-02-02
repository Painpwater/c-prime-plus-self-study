#include <stdio.h>

int main(void)
{
    float hight_cm,hight_m;
    char name[40];

    printf("Please enter your hight in cm:");
    scanf("%f",&hight_cm);
    printf("Please enter your name:");
    scanf("%s",name);
    hight_m = hight_cm/100.0;
    printf("You are %s,your hight in m is %.3f",name,hight_m);

    return 0;
}