#include <stdio.h>

int main(void)
{
    int ch[8];
    int length;
    

    for(length=0;length<8;length++)
    {
        scanf("%d",&ch[length]);
    }
    for(length=7;length>=0;length--)
    {
        printf("%d",ch[length]);
    }

    return 0;
}