#include <stdio.h>

int main(void)
{
    char ch;
    int i=0;

    while((ch =getchar())!='#')
        {
            if(i++%8==0 && i!=1)
                printf("\n");
            if(ch == '\n')
                printf("'\\n'——%-5d",ch);
            else if (ch == '\t')
                printf("'\\t'——%-5d",ch);
            else
                printf("'%c'——%-5d",ch,ch);
        }

    return 0;
}