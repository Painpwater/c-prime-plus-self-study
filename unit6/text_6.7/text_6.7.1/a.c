// 求序列的和
#include <stdio.h>

int main(void)
{
    int count;
    double sum,power_of_2;
    int limit;

    printf("Enter the number of terms you want:");
    scanf("%d",&limit);
    for (sum =0,count =1,power_of_2=1.0; count<+limit;count++,power_of_2 *=2.0)
    {
        sum += 1.0/power_of_2;
        printf("sum = %lf when terms = %d.\n",sum,count);
    }

    return 0;
}