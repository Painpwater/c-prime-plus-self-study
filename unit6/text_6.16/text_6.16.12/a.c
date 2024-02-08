#include <stdio.h>

int main(void)
{
    double n1,n2,n3,sum1,sum2;
    int n,count;
    n1 = n2 = 1.0;
    sum1 =sum2=0;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(count = 1;count<=n;count++,n2++)
    {
        sum1 += n1/n2;
    }
    printf("%lf\n",sum1);
    for(count = 1,n2=1, n3 = n1=-1;count<=n;count++,n2++)
    {
        
        n1  *= n3; 
        sum2 += n1/n2;
    }
    printf("%lf\n",sum2);
    printf("%lf\n",sum2+sum1);
    
    return 0;
}