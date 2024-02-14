#include <stdio.h>

int main(void)
{
    int count;
    char ch;

    while((ch = getchar()) !='#')
    {
        if(ch=='!')
        {
            printf("!!");
            count++;
        }    
        else if (ch == '.')
        {
            printf("!");
            count++;
        }
        else
            printf("%c",ch);  
    }
    printf("\n%d\n",count);

    return 0;
}