#include <stdio.h>

int main(void)
{
    int friends =5;
    int week;
    
    for(week = 1;friends<=150;week++)
    {
        friends -= week;
        friends *=2;
    }
    week--;
    printf("%d周后,朋友数(%d)超过邓巴数。",week,friends);

    return 0;
}