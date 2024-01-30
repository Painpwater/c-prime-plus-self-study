//显示ascii
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a characrer:\n");
    scanf("%c",&ch);
    printf("The code for %c is %d,%#o,%#x.\n",ch,ch,ch,ch);

    return 0;
}