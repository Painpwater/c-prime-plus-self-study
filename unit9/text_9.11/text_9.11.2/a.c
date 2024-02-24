#include <stdio.h>
void chline(char ch,int i,int j);

int main(void)
{
    chline('c',5,4);

    return 0;
}


void chline(char ch,int i,int j)
{
    int count1,count2;

    for(count1=1;count1<=j;count1++)
    {
        for(count2=1;count2<=i;count2++)
            putchar(ch);
        printf("\n");
    }
}