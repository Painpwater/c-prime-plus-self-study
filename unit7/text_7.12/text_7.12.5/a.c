#include <stdio.h>

int main(void)
{
    int count;
    char ch;

    while((ch = getchar()) !='#')
    {
        switch(ch)
        {
            case '!':
                printf("!!");
                count++;
                break;
            case '.':
                printf("!");
                count++;
                break;
            default:
                printf("%c",ch);
                break;
        }
    }
    printf("\n%d\n",count);

    return 0;
}