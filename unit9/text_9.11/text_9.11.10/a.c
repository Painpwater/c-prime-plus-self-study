//以二进制形式打印整数
#include <stdio.h>
void to_binary(unsigned long n,int m);

int main(void)
{
    unsigned long number;
    int p;
    printf("Enter　an　integer　(q　to　quit):\n");
    while (scanf("%lu %d",&number,&p)==2)
    {
        printf("%lu的%d进制数为:",number,p);
        to_binary(number,p);
        putchar('\n');
        printf("Enter　an　integer and a x进制　(q　to　quit):\n");
    }
    printf("Done.\n");

    return 0;
}
void to_binary(unsigned long n,int m) //递归函数
{
    int r;
    
    r = n % m;
    
    if(n<1)
        return ;
    else
        to_binary(n/m,m);
    printf("%d",r);
    
}