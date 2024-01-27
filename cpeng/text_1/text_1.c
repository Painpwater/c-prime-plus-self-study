#include <stdio.h>

int main()
{
    char ph ='\0';
    while ((ph = getchar())!=EOF)
    {
       if (ph<'0' || ph>'9')
       continue;
       putchar(ph);
    }
    

    return 0;
}
