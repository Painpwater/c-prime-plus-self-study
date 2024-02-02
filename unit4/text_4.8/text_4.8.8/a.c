//假设x英里/加仑，则(235.2/x)升/100公里
#include <stdio.h>
#define P 235.2

int main(void)
{
    float s , v,r;
    printf("Please enter your s(英里) and v (加仑)");
    scanf("%f %f",&s,&v);
    r = s /v;
    printf("%.1f英里/加仑，%.1f升/100公里.\n",r,P/r);

    return 0;
}