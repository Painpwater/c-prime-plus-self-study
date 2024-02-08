#include <stdio.h>

int main(void)
{
    int row,count;
    char ch = 'A';
    
    for(row = 1;row<=6;row++)
    {
        for(count=1;count<=row;count++,ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}