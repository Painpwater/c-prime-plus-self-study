#include <stdio.h>
long get_long(void);
int main(void)
{
    long input;
    char ch;

    input= get_long();
    printf("%ld",input);

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while(scanf("%ld",&input)!=1)
    {
        while((ch= getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not an integer.\nPlease enter"
                " an integer value,such as 25,-178,or 3:");
        
        
    }
    return input;
}
