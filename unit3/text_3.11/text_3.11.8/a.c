#include <stdio.h>

int main(void)
{
    int numb,as,dts,cs;
    float pt;

    printf("Please enter 杯数:");
    scanf("%d",&numb);
    pt = numb/2;
    as = numb*8;
    dts = numb* 8* 2;
    cs = dts *3;
    printf("品脱=%f,盎司=%d,大汤勺=%d,茶勺=%d",pt,as,dts,cs);

    return 0;
}