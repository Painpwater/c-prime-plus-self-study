//第一个版本的交换函数
#include <stdio.h>
void interchange(int,int); //函数原型

int main(void)
{
    int x= 7;
    int y= 10;

    printf("Originally x =%d and y = %d.\n",x,y);
    interchange(x,y);
    printf("Now x =%d and y = %d.\n",x,y);

    return 0;
}
void interchange(int u,int v)
{
    int temp;

    temp = u;
    u =v;
    v= temp;
}