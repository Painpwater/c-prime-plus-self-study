#include <stdio.h>

int main(void)
{
    double mwater = 3.0e-23;
    int mkua,num;
    mkua = 950;
    
    printf("Enter numkuatuo:");
    scanf("%d",&num);
    printf("mwaterfenzi = %e",num*mkua/mwater);

    return 0;
}