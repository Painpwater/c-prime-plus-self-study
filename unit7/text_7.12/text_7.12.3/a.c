#include <stdio.h>

int main(void)
{
    int num,counto,countj,sumo,sumj;
    float js,os;
    num= counto = countj = sumo = sumj =0;
    
    while( scanf("%d",&num)==1)
    {
        if(num == 0)
            break;
        if(num%2==0)
        {
            counto++;
            sumo +=num;

        }   
        else
        {
            countj++;
            sumj +=num;
        }   
    }
    os = (float)sumo/counto;
    js = (float)sumj/countj;
    printf("共%d个偶数,平均数为%.2f;共%d个奇数,平均数为%.2f\n",
            counto,os,countj,js);

    return 0;
}