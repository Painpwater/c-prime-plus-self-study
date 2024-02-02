// 演示一些格式标记
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x %#X\n",31,31,31,31);
    printf("**%d**% d**% d**\n",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6); //%5.3d  5是指字段宽度为5， 3是指**  006**0的宽度加d的宽度一共为3

    return 0;
}