#include <stdio.h>

int main(void)
{
    float v,s,seconds;

    printf("Please enter v(Mb/s) and s(MB):"); //MB=8Mb
    scanf("%f %f",&v,&s);
    seconds = s*8.0/v;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",v,s,seconds);

    return 0;
}