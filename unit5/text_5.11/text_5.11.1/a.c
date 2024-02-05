#include <stdio.h>
#define M_PER_H 60      //一小时的分钟数

int main(void)
{
    int time,hours,mins;

    printf("Enter your time(minutes):\n");
    scanf("%d",&time);
    while (time>0)
    {
        hours = time / M_PER_H;
        mins = time % M_PER_H;
        printf("%d hours,%d mins\n",hours,mins);
        printf("continue to >0,or <= 0\n");
        scanf("%d",&time);
    }
    printf("Bye");

    return 0;
}