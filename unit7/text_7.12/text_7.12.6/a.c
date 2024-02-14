#include <stdio.h>

int main(void)
{
    char ch;
    int count= 0;
    int sign;
    
    while((ch=getchar())!='#')
    {
       switch(ch)
       {
        case 'e':
            sign = 1;
            break;
        case 'i':
            if(sign==1)
                count++;
            sign=0;
            break;
        default:
            sign=0;
            break;
       }
    }
    printf("%d",count);

    return 0;
}