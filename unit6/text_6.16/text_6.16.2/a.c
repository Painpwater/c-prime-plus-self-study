#include <stdio.h>

int main(void)
{
    int row,count;
    
    for(row = 1;row<=5;row++)
    {
        for(count=1;count<=row;count++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}