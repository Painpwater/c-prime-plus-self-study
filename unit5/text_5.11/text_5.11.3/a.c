#include <stdio.h>
#define D_PER_W 7      //一星期的天数

int main(void)
{
    int time,weeks,days;

    printf("Enter your time(days):\n");
    scanf("%d",&time);
    while (time>0)
    {
        weeks = time / D_PER_W;
        days = time % D_PER_W;
        printf("%d days are %d weeks,%d days.\n",time,weeks,days);
        printf("continue to >0,or <= 0\n");
        scanf("%d",&time);
    }
    printf("Bye");

    return 0;
}