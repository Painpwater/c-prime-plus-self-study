#include <stdio.h>

int main(void)
{
    int years;
    float seconds = 3.156e7f;

    printf("Please enter your years:");
    scanf("%d",&years);
    printf("to seconds is %.3f\n",seconds*years);

    return 0;
}