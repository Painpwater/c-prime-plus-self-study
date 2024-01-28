//sizeof()运算符，作用是计算整数类型的大小，单位是字节
#include <stdio.h>

int main()
{
    printf("int size=%d\n",sizeof(int));
    printf("short size=%d\n",sizeof(short));
    printf("long size=%d\n",sizeof(long));
    printf("long long size=%d\n",sizeof(long long));

    return 0;
}