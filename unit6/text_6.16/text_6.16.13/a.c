#include <stdio.h>

int main(void)
{
    int ch[8];
    int index,n;

    for(index = 1,ch[0]=1;index<8;index++)
    {
        ch[index] =ch[index-1]*2 ;                  // 2的n次方=2的(n-1)次方*2
    }
    printf("\n");
    index = 0;
    
    do
    {
        
        printf("%d   ",ch[index]);
        index++;
    } while (index<8);
    printf("\n");

    
    
    return 0;
}

