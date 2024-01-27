//输出1-100之间的奇数
#include <stdio.h>
int main()
{
    int i = 1;
    while (i<101)
    {
        if (i %2 == 1)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;

}