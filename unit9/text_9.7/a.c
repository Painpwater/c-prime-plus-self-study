// 使用指针解决交换函数的问题
#include <stdio.h>
void interchange(int* u,int* v);

int main(void)
{
    int x= 5,y =10;
    printf("Originally x = %d and y = %d.\n",x,y);
    printf("&x=%p.\n",&x);
    interchange(&x,&y);
    printf("&x=%p.\n",&x);
    printf("Now x = %d and y =%d.\n",x,y);

    return 0;
}

void interchange(int* u,int* v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}