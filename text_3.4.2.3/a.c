//已知该系统short 16位，int/long 32位，long long 64位
//unsigned int              %u
//short                     %hd
//long                      %ld(因为本系统中int和long大小相同也可以用%d)
//(signed) long long        %lld
//unsigned long long        %llu
#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n",un);
    printf("end = %hd and not %d\n",end);
    printf("big = %ld and not %hd\n",big);
    printf("verybig = %lld and not %ld\n",verybig);

    return 0;
}
