//指数增长
#include <stdio.h>
#define SQUARES 64 //棋盘中的方格数

int main(void)
{
    const double CROP = 2E16; //世界小麦年产谷粒数
    double current,total;
    int count = 1;

    printf("square     grains     total     fraction of\n");
    printf("           added      grains    world total\n");
    total = current = 1.0;
    while (count<SQUARES+1)
    {
        printf("%4d %13.2e %12.2e %12.2e\n",
                count,current,total,total/CROP);
        count = count +1;
        current = current *2;
        total = total +current  ;
    }
    
    return 0;
}
